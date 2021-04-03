/************************************************
* Nombre: hours to minutes                      * 
*                                               *
*                                               *
* Proposito: converts hours to minutes          *
*                                               *
*                                               *
* Uso:print the total of minutes of given hours *
*                                               *
************************************************/

char line[200]; /*line with the input data*/
int hour;/*variable to store the hours*/
int minutes;/*variable to store the minutes*/
int total;/*counts for all the minutes*/

#include <stdio.h>

int main(){

printf("please enter the number of hours and minutes: ");
fgets(line,sizeof(line),stdin);
sscanf(line, "%d" "%d", &hour, &minutes);

total= ((hour * 60) + minutes);

printf("the total of minutes is: %d\n", total);

return 0;
}
