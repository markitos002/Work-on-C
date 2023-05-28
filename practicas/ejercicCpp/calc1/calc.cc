#include <iostream.h>

int   result;    // the result of the calculations 
char  oper_char; // operator the user specified 
int   value;     // value specified after the operator

int main()
{
    result = 0; // initialize the result 

    // Loop forever (or till we hit the break statement) 
    while (1) {
        cout << "Result: " << result << '\n';

        cout << "Enter operator and number: ";
        cin >> oper_char >> value;

        if (oper_char = '+') {
            result += value;
        } else {
            cout << "Unknown operator " << oper_char << '\n';
        }
    }
    return (0);
}
