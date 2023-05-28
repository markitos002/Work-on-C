/*******************************************************************************************************************
Nombre: Employee salary

Proposito: Calculates the employee's salary according with the worked hours

Uso: input the number or hours and return the salary
********************************************************************************************************************/
char line[200]; /* input for value of the hour and the number of worked hours */
float overhours = 0; /* number of overtime hours*/
float hours; /* variable for the number of hours */
float value; /* value of the worked hour */
float extra; /* value of overtime hours */
float total_hours; /* number of total hours */

#include <stdio.h>

int main(){

printf(" >>> This program calculates the Weekly pay for an employee <<< \n");
printf( "please enter the number of *** hours *** and the *** value for the hour *** worked by the employee: \n");

fgets(line, sizeof(line), stdin);
sscanf(line, "%f %f", &hours, &value);

if(hours > 40)
	overhours = hours - 40 ;
else
	hours = hours;

extra = overhours * 1.5;

if(hours > 40)
	total_hours = 40 + extra ;
else
	total_hours = hours;

printf(" >> the salary of the employee is %.1f \n",(total_hours * value));









return 0;
}
