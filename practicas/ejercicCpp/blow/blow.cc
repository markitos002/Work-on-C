#include <iostream.h>
#include <stdlib.h>

class list {
    private:
	int item;	// Current item number

    public:
	virtual void clear() = 0;

	void next_item(void) {
	    ++item;
	}

	list(void) { 
	    item = 0;
	}

	virtual ~list() {
	   clear();
	}
};

class list_of_integers : public list {
    public:
        int array[100];   // Place to store the items

	void clear(void) {
	    int i;	// Array index

	    for (i = 0; i < 100; ++i) 
		array[i] = 0;
	}
};

main()
{
    list_of_integers *list_ptr = new list_of_integers;

    // Cause problems
    delete list_ptr;
    list_ptr = NULL;
    return (0);
}
