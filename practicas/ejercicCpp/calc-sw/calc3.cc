#include <iostream.h>
int   result;	   // the result of the calculations 
char  oper_char;   // operator the user specified 
int   value;	   // value specified after the operator 
main()
{
    result = 0;			// initialize the result 

    // loop forever (or until break reached)
    while (1) {
	cout << "Result: " << result << '\n';
	cout << "Enter operator and number: ";

	cin >> oper_char >> value;

	if ((oper_char == 'q') || (oper_char == 'Q'))
	    break;

	switch (oper_char) {
	    case '+':
		result += value;
		break;
	    case '-':
		result -= value;
		break;
	    case '*':
		result *= value;
		break;
	    case '/':
		if (value == 0) {
		    cout << "Error:Divide by zero\n";
		    cout << "   operation ignored\n";
		} else
		    result /= value;
		break;
	    default:
		cout << "Unknown operator " << oper_char << '\n';
		break;
	}
    }
    return (0);
}
