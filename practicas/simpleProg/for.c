/*******************************************************************************************************************
Nombre: practice for statement   

Proposito: know and practice the use of the for statement, also compare for statement with while statement

Uso: use for statement and compare with while statement 
********************************************************************************************************************/

#include <stdio.h>

int total; /*total of all numbers */
int current; /* current value input by the user  */
int counter; /* while loop counter */
char line[100]; /*line to input the data from the keyboard */

int main(){

total = 0;
counter = 0;

    while (counter < 5)
    {
        printf("Number? ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &current);
        total += current;

        ++counter;
    }
    
    printf("The grand total is: %d\n", total);

//now we go with for statement

printf("Here we go with for statement\n");

	for(counter =0; counter < 5; counter++){

	printf("Number? ");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &current);
	total += current;
	}
	printf("the grand >for< total is: %d\n",total);

return 0;
}
