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
 *	stack -- initalize the stack.			*
 *	push -- put an item on the stack.		*
 *	pop -- remove an item from the stack.		*
 ********************************************************/
// The stack itself
template<class kind>
class stack {
    private:
	int count;		// Number of items in the stack
	kind data[STACK_SIZE];	// The items themselves
    public:
	// Initialize the stack
	stack(void) {
	    count = 0;	// Zero the stack
	}

	// Push an item on the stack
	void push(const kind item) {
	    data[count] = item;
	    ++count;
	}

	// Pop an item from the stack
	kind pop(void) {
	    // Stack goes down by one
	    --count;

	    // Then we return the top value
	    return (data[count]);
	}
};

// A short routine to test the stack
main()
{
    stack<int> a_stack;	// Stack we want to use

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
