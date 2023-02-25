/*******************************************************************************************************************
Nombre: aritmetic date calculator	 

Proposito: calculate how many days between to given dates	

Uso: input two dates, the program calculate the diference and prints the diference of the days  
********************************************************************************************************************/
char line[200]; /* input the data */
int days; /* variable for days */
int days_late; /* variable for the other date */
int month; /* variable for months */
int month_late; /* variable for the other date */
int year; /* variable for year */
int year_late; /* variable for the other date */
int output_days; /* calculated days from one date to another */
int total_days; /* sum of all days of the first year entered */
int total_days_late;/* sum of all days of the second year entered */
int dif_days; /* difference days between years */
int dif_years; /* difference years between given dates */

#include <stdio.h>
#include <math.h>

int main(){
while(1){
	printf (" Please enter the former date to calculate, separate days, month and year by an space: \n");
	fgets(line,sizeof(line),stdin);
	sscanf(line, "%d %d %d", &days, &month, &year); /* conversion to integer */

/* former analysis, but it is not proper for the requested program operation 
	if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ){
	month = 31;
	}
	else if (month == 2 && ((((year % 4) == 0) && ((year % 100) != 0)) || ((year %400) == 0))){
	month = 29;
	}
	else if (month == 2){
	month = 28;
	}
	else 
	month = 30;*/

	printf (" Please enter the  later date to calculate, separate days, month and year by an space: \n");
	fgets(line,sizeof(line),stdin);
	sscanf(line, "%d %d %d", &days_late, &month_late, &year_late); /* input and conversion to integer */

/* former analysis, but it is not proper for the requested program operation
	if((month_late == 1 || month_late == 3 || month_late == 5 || month_late == 7 || month_late == 8 || month_late == 10 || month_late == 12) ){
	month_late = 31;
	}
	else if (month_late == 2 && ((((year_late % 4) == 0) && ((year_late % 100) != 0)) || ((year_late %400) == 0))){
	month_late = 29;
	}
	else if (month_late == 2){
	month_late = 28;
	}
	else 
	month_late = 30;

*/
/* printf ("%d\n",month); */ /*to debug the month */
/* printf ("%d\n",month_late);*/ /* to debug the month */

	if(month == 1){  /* series of conditionals to sum the days of the first year */
	total_days= 31;
	}
	if(month == 2){ 
	total_days = 60;
	}  
	if(month == 3){
	total_days = 91;
	}
	if(month == 4){
	total_days = 121;
	}
	if(month == 5){
	total_days = 152;
	}
	if(month == 6){
	total_days = 182;
	}
	if(month == 7){
	total_days = 213;
	}
	if(month == 8){
	total_days = 244;
	}
	if(month == 9){
	total_days = 274;
	}
	if(month == 10){
	total_days = 305;
	}
	if(month == 11){
	total_days = 335;
	}
	if(month == 12){
	total_days = 365;
	}
	if((((year % 4) == 0) && ((year % 100) != 0)) || ((year %400) == 0)){ /* conditional to control the leap year */
	total_days = total_days + 1; /* add 1 to the leap year */
	}

/*** ***/

	if(month_late == 1){ /* series of conditionals to the sum the days of the second year */
	total_days_late= 31;
	}
	if(month_late == 2){ 
	total_days_late = 60;
	}  
	if(month_late == 3){
	total_days_late = 91;
	}
	if(month_late == 4){
	total_days_late = 121;
	}
	if(month_late == 5){
	total_days_late = 152;
	}
	if(month_late == 6){
	total_days_late = 182;
	}
	if(month_late == 7){
	total_days_late = 213;
	}
	if(month_late == 8){
	total_days_late = 244;
	}
	if(month_late == 9){
	total_days_late = 274;
	}
	if(month_late == 10){
	total_days_late = 305;
	}
	if(month_late == 11){
	total_days_late = 335;
	}
	if(month_late == 12){
	total_days_late = 365;
	}
	if((((year_late % 4) == 0) && ((year_late % 100) != 0)) || ((year_late %400) == 0)){ /* control the leap year */
	total_days_late = total_days_late + 1; /* add 1 to the leap year */
	}

//printf("%d\n",total_days); /* debug total days */
//printf("%d\n",total_days_late); /* debug total days late */

dif_days = fabs(total_days - total_days_late); /* calculate the difference in days between given dates */
dif_years = fabs(year - year_late); /* calculate difference in years between given dates */

printf("diference in the days is: %d\n",dif_days); /* print the difference in days */ 
printf("diference in years is: %d\n", dif_years); /* print the difference in years */
printf("diference in date is: %d years and %d days\n", dif_years, dif_days); /* print the difference in the given dates */

}
return 0;
}



								
