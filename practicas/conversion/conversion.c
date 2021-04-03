/*******************************************************************************************************************
Nombre: conversion of units	 

Proposito: convert the user units from english system to international system	

Uso: the user selects the unit and then the program execute the conversion to international system
********************************************************************************************************************/
char line[100]; /*line to input the data */
float liters; /* variable for liter output */
float centimeter; /* varible for centimeter output */
float kilometer; /* variable for kilometer  output */
int sel; /* varible for select the option */
#include <stdio.h>

int main(){

while(1){

	printf(" Please enter the number to select the conversion module: 1- gal to lit, 2- miles to Km, 3- inch to cm: , 0 to get out\n");
	fgets(line,sizeof(line),stdin);
	sscanf(line, "%d",&sel); /* conversion from char to int */

	if(sel == 0)
	break; /* option to get out of the program */

	if(sel == 1){
	printf(" please enter the number of gallons to convert:\n ");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%f", &liters); /* asign line input to liter variable and converts it to integer */
	printf( " the converted gallons to liters is: %.3f\n", liters*3.785); /* print the result and make the aritmetic conversion */
	}

	if(sel == 2){
	printf(" please enter the number of miles to convert:\n ");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%f", &kilometer);
	printf( " the converted miles  to kilometer is: %.3f\n", kilometer*1.609); /* print the result and make the aritmetic conversion */
	}

	if(sel == 3){
	printf(" please enter the number of inch to convert:\n ");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%f", &centimeter);
	printf( " the converted inch to centimeter is: %.3f\n", centimeter*2.54); /* print the result and make the aritmetic conversio */ 
	}
    }
return 0;
}
