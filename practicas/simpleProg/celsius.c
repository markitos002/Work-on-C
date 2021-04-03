/*******************************************************************************************************************
Nombre: this program print the temperatures from 0 to 100 celsius converted to farenheit 

Proposito: print the conversion while we use the FOR statemen

Uso: run the program to print in the console the temperatures
********************************************************************************************************************/

#include <stdio.h>

int celsius; /* variable for celsius temperature */


int main(){
	for(celsius =0; celsius <= 100; ++celsius){

	printf(" Celsius: %d  Farenheit: %d \n", celsius, ((celsius * 9)/5 + 32));
	}


return 0;
}
