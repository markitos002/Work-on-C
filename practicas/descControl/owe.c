/************************************************
* Nombres:owe dollars                           * 
*                                               *
*                                               *
* Proposito: identify the error in the program  *
*                                               *
*                                               *
* Uso: correct the error                        *
*                                               *
************************************************/

#include <stdio.h>

char line[80]; /*as always the input line*/
int balance_owe; /*amount owed */

int main(){

	printf("enter the number of dollars owed: ");
	fgets(line,sizeof(line),stdin);
	sscanf(line, "%d", &balance_owe);

	if(balance_owe == 0)/*** here's the error, it was corrected by replacing the asigment = with compare == ***/
		printf("you owe nothing. \n");

	else
		printf("you owe %d  dollars.\n", balance_owe);



return 0;
}
