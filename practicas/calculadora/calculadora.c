/*******************************************************************************************************************
Nombre: Calculator with four built-in functions	

Proposito: make four different types of calculations + - * /

Uso: input the operator and the number, it return the result 
********************************************************************************************************************/
char line[100]; /* line to input the data */
int result; /* variable for the result */
char operator; /* varible to input the operator */
int value; /* variable for the value after the operator */

#include <stdio.h>

int main(){

result = 0; /* initialize the varible result */

/* loop all the time until we hit the break statement */

while(1){


	printf("Result : %d\n",result); /* print the result, it starts with  */

	printf(" Enter operator and number: "); /* here the text it inputs the operator and the number */
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%c %d", &operator, &value);/* conversion to char and to int i.e. the operator and the number to calculate */

	if((operator == 'q')||(operator == 'Q')) /* this two lines is to get out of the program */
		break;
		 
	if(operator == '+'){ /* the next 8 lines lead to operators and its process */
		result += value;
	}else if(operator == '-'){
		result -= value;
	}else if(operator == '*'){
		result *= value;
	}else if(operator == '/'){
	  if(value == 0){
		printf("Error: divide by zero\n"); /* to avoid 0 division in the / operator, include as an 'if condition' */
		printf("   operation ignored\n");
	   }else 
	   	result /= value;
	}else{
		printf(" Unknown operator %c\n", operator); /* if there is no suitable operator */
	}
}

return 0;
}
