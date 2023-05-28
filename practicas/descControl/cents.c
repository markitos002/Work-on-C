/*******************************************************************************************************************
Nombre: it calculates the cents, nikels, penies and quarters 

Proposito: calculates several types of coins

Uso: input the money and return several types of coins
********************************************************************************************************************/

char line[100];
int cents;
int penies;
int nikels;
int quarters;
int money;

#include <stdio.h>

int main(){

printf ("please input the coins you have in your pocket: " );
fgets(line,sizeof(line),stdin);
sscanf(line, "%d", &money);

if( (money % 25) == 0)
	printf("you may have %d Quarters \n", money / 5);
else
	printf("you have 0 Quarters \n");


if( (money % 10) == 0)
	printf("you may have %d Dimmes \n", money / 10);
else
	printf("you have 0 Dimmes \n");

if( (money % 5) == 0)
	printf("you may have %d Nickels \n", money / 5);
else
	printf("you have 0 Nickels \n");

printf("and finally you may have %d Cents\n", money / 1);



return 0;
}
