/********************************************************
 * Stack						*
 *	A file implementing a simple stack class	*
 ********************************************************/
#include <stdlib.h>
#include <iostream.h>

const int STACK_SIZE = 100;	// Maximum size of a stack

/********************************************************
 * Stack class						*
 *							*
 * Member functions					*
 *	stack -- initialize the stack.			*
 *	push -- put an item on the stack.		*
 *	pop -- remove an item from the stack.		*
 ********************************************************/
// The stack itself
class stack {
    protected:
	int count;		// Number of items in the stack
    private:
	int data[STACK_SIZE];	// The items themselves
    public:
	// Initialize the stack
	stack(void);
	// ~stack() -- default destructor
	// copy constructor defaults

	// Push an item on the stack
	void push(const int item);

	// Pop an item from the stack
	int pop(void);
};

/********************************************************
 * stack::stack -- initialize the stack.		*	
 ********************************************************/
inline stack::stack(void)
{
    count = 0;	// Zero the stack
}
/********************************************************
 * stack::push -- push an item on the stack.		*
 *							*
 * Warning: We do not check for overflow.		*
 *							*
 * Parameters						*
 *	item -- item to put in the stack		*
 ********************************************************/
inline void stack::push(const int item)
{
    data[count] = item;
    ++count;
}
/********************************************************
 * stack::pop -- get an item off the stack.		*
 *							*
 * Warning: We do not check for stack underflow.	*
 *							*
 * Returns						*
 * 	The top item from the stack.			*
 ********************************************************/
inline int stack::pop(void)
{
    // Stack goes down by one
    --count;

    // Then we return the top value
    return (data[count]);
}

/********************************************************
 * b_stack -- bound checking stack.			*
 *							*
 * Member function					*
 *	push -- push an item on the stack		*
 *	pop -- remove an item from the stack.		*
 ********************************************************/
class b_stack: public stack {
    public:
	// b_stack -- default constructor
	// ~b_stack -- default destructor
	// copy constructor defaults

	// Push an item on the stack
	void push(const int item);

	// Remove an item from the stack
	int pop(void);
};
/********************************************************
 * b_stack::push -- push an item on the stack.		*
 *							*
 * Parameters						*
 *	item -- item to put in the stack		*
 ********************************************************/
inline void b_stack::push(const int item)
{
    if (count >= STACK_SIZE) {
	cerr << "Error: Push overflows stack\n";
	exit (8);
    }
    stack::push(item);
}
/********************************************************
 * b_stack::pop -- get an item off the stack.		*
 *							*
 * Returns						*
 * 	The top item from the stack.			*
 ********************************************************/
inline int b_stack::pop(void)
{
    if (count <= 0) {
	cerr << "Error: Pop causes stack underflow\n";
	exit (8);
    }
    return (stack::pop());
}

