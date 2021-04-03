/*******************************************************************************************************************
Nombre:learn to use Swhitch and continue statements 

Proposito: use switch and continue in a program

Uso: enter a number to change the conversion, octal, hexa, decimal or quit from the program
********************************************************************************************************************/

#include <stdio.h>

int number; /*number that we are converting */
char type; /* type of the conversion to do */
char line[80]; /* line to input the data */

int main(void){

	while(1){
		printf("enter conversion and number: ");
		fgets(line, sizeof(line),stdin);
		sscanf(line, "%c", &type);

		if((type == 'Q') || (type == 'q'))
		break;

		switch(type){
			case 'o':
			case 'O':
			sscanf(line, "%c %o", &type, &number);
			break;

			case 'x':
			case 'X':
			sscanf(line, "%c %x", &type, &number); 
			break;

			case 'd':
			case 'D':
			sscanf(line, "%c %d", &type, &number);
			break;
			
			case '?':
			case 'h':
				printf(" Letter conversion\n");
				printf("   o   Octal\n");
				printf("   x   Hexadecimal\n");
				printf("   d   Decimal\n");
				printf("   q   Quit the program\n");

				/* don't print the number*/
				continue;
			default:
				printf(" Type ? for help\n");
				/* don't print the number*/
				continue;
				}
			printf("Result is: %d\n",number);
	}
return 0;
}
