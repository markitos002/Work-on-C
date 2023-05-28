/*******************************************************************************************************************
Nombre: Average program to average n numbers 

Proposito: determine the average of n given numbers

Uso: the user input n quantity of numbers and the program print the average
********************************************************************************************************************/

#include <stdio.h>

int count=0;
int sum=0;
int average=0;
int input;
char line[50];

int main(){

while(1){

printf(" Enter a new number to the average, q or Q to quit and print the result: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &input);
	if(input == 0)
		break;

sum+=input;
count++;

}
printf(" the average of all entered numbers are: %d\n", (average = sum/count));


return 0;
}
