/************************************************
* Nombre: minutes to hours                      * 
*                                               *
*                                               *
* Proposito: converts minutes to hours          *
*                                               *
*                                               *
* Uso:print the total of hour of given minutes  *
*                                               *
************************************************/

char line[200]; /*line with the input data*/
int hour;/*variable to store the hours*/
int minutes;/*variable to store the minutes*/
int total;/*counts for all the minutes*/

#include <stdio.h>

int main(){

printf("please enter the number of minutes: ");
fgets(line,sizeof(line),stdin);
sscanf(line, "%d" , &minutes);
hour= minutes / 60; /*total of hours*/

total= (minutes % 60);/* residue of total minutes against one hour*/

printf("the total of hours is: %d and the minutes is %d\n",hour,total);

return 0;
}
