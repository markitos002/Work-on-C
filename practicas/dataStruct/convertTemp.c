/************************************************
* Nombre:converts centigrade to fahrenheit degr * 
*                                               *
*                                               *
* Proposito: converts the temp scale            *
*                                               *
*                                               *
* Uso: ask for temp and return the convert temp *
*                                               *
************************************************/

char centi [100]; /*** this variable input the data ***/
float centi1=0; /***variable to centigr degrees ***/
float fahr=0; /***variable to return the fahrenheit degrees***/

#include <stdio.h>

int main(){

printf("please enter the value of centigrade degree: \n");
fgets(centi,sizeof(centi),stdin); /***input the data and store in centi variable ***/
sscanf(centi,"%f",&centi1); /***conversion of input data (char) to float data ***/

fahr= (9/5 * (centi1) ) + 32; /*** return of the fahr data ***/

printf("the value of fahrenheit degrees is: %.2f\n",fahr);



return 0;
}
