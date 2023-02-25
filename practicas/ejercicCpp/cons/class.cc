#include <iostream.h>

class base_class {
    public:
	base_class() {
	   cout << "base_class constructor called\n";
	}
	~base_class() {
	   cout << "base_class destructor called\n";
	}
};
class derived_class:public base_class {
    public:
	derived_class() {
	   cout << "derived_class constructor called\n";
	}
	~derived_class() {
	   cout << "derived_class destructor called\n";
	}
};

