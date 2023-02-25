#include <iostream.h>
int   result;    // the result of the calculations 
char  oper_char; // operator the user specified 
int   value;     // value specified after the operator 
main()
{
    result = 0; // initialize the result 

    // loop forever (or until break reached)
    while (1) {
        cout << "Result: " << result << '\n';
        cout << "Enter operator and number: ";

        cin >> oper_char >> value;

        if ((oper_char == 'q') || (oper_char == 'Q'))
            break;

        if (oper_char == '+') {
            result += value;
        } else if (oper_char == '-') {
            result -= value;
        } else if (oper_char == '*') {
            result *= value;
        } else if (oper_char == '/') {
            if (value == 0) {
                cout << "Error:Divide by zero\n";
                cout << "   operation ignored\n";
            } else
                result /= value;
        } else {
            cout << "Unknown operator " << oper_char << '\n';
        }
    }
    return (0);
}
