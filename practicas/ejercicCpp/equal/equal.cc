#include <iostream.h>

class trouble {
    public:
	int data;

	trouble(void);
	trouble(const trouble &old);
	trouble operator = (trouble old_trouble);
};

trouble::trouble(void) {
   data = 0;
}

trouble::trouble(const trouble &old) {
   cout << "Copy constructor called\n";
   *this = old;
}

trouble trouble::operator = (trouble old_trouble) {
    cout << "Operator = called\n";
    data = old_trouble.data;
    return (*this);
}

int main()
{
    trouble trouble1;
    trouble trouble2(trouble1);

    return (0);
}
