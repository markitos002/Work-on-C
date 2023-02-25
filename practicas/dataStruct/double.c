/************************************************
* Nombre: enter a number with sscanf instead of * 
* scanf due to its several issues               *
*                                               *
* Proposito: understand the use of sscanf       *
*                                               *
*                                               *
* Uso: enter a number and store it in a variable*
*                                               *
************************************************/

#include <stdio.h>

char line[100]; /***input the line from console ***/
int  value; /***a value to double***/


int main(){

printf("enter a value: ");

fgets(line, sizeof(line),stdin);
sscanf(line, "%d", &value);

printf("twince %d is %d\n",value, value * 2);  /***print the entered value and multitly by 2, an then print the result ***/
printf("size of the number is: %d\n", sizeof(line));



return 0;
}
