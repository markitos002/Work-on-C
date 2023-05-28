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
 *	init -- initialize the stack.			*
 *	push -- put an item on the stack.		*
 *	pop -- remove an item from the stack.		*
 ********************************************************/
// The stack itself
class stack {
    private:
	int count;		// Number of items in the stack
	int data[STACK_SIZE];	// The items themselves
    public:
	// Initialize the stack
	void init(void);

	// Push an item on the stack
	void push(const int item);

	// Pop an item from the stack
	int pop(void);
};

/********************************************************
 * stack::init -- initialize the stack.			*
 ********************************************************/
inline void stack::init(void)
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

// A short routine to test the stack
main()
{
    stack a_stack;	// Stack we want to use

    a_stack.init();

    // Push three value on the stack
    a_stack.push(1);
    a_stack.push(2);
    a_stack.push(3);

    // Pop the item from the stack
    cout << "Expect a 3 ->" << a_stack.pop() << '\n';
    cout << "Expect a 2 ->" << a_stack.pop() << '\n';
    cout << "Expect a 1 ->" << a_stack.pop() << '\n';

    return (0);
}
