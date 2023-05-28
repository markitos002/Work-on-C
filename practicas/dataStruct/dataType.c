/************************************************
* Nombre:identify several data types            * 
*                                               *
*                                               *
* Proposito:  To know how data types works      *
*                                               *
*                                               *
* Uso: print in the screen some examples of data*
*                                               *
************************************************/
/***here some example of a very short integer called 'char' ***/

signed char very_short; /* a very shor integer, from -128 to 128 */
char line[100];         /*here is an input buffer, because it is not possible to directly read a very short integer */
int temp;               /* a temporary number */

#include <stdio.h>

int main(){
/*** read a very short integer ***/
printf("please enter a number: \n");
fgets(line,sizeof(line),stdin);
sscanf(line,"%d",&temp);
very_short = temp;

printf("the entered number is %d\n",temp );



return 0;
}
