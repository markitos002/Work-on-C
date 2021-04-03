/*******************************************************************************************************************
Nombre: Leap year	

Proposito: Print if a year is a leap year 

Uso: given a year the program returns if the year is leap or not. 
********************************************************************************************************************/

char line[50]; /* line to enter the year */
int year; /* varible to make the conversion */

#include <stdio.h>

int main(){

printf("please enter the year to determine if the year is Leap or not: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d" , &year);

if((((year % 4) == 0) && ((year % 100) != 0)) || ((year %400) == 0)) /* logic operator: if year is divisible by 4 (true), and year is not div by 100 (true)
									but is div by 400 (true) */
	printf(" The input year is a Leap Year \n");

else
	printf(" The input year is not a Leap Year \n");




return 0;
}
