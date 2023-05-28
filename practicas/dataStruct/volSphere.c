/************************************************
* Nombre:resolv the sphere volume given inp dat * 
*                                               *
*                                               *
* Proposito: give volume of the sphere          *
*                                               *
*                                               *
* Uso: input data and return the value of spher *
*                                               *
************************************************/

char line [100]; /*** this variable input the data ***/
float rad=0; /***variable to centigr degrees ***/
float radi=0;
float sphe=0; /***variable to return the fahrenheit degrees***/
const float PI= 3.1415927; /***constant ***/

#include <stdio.h>
#include <math.h>/***this library is associated to math operators ***/

int main(){

printf("please enter the value of radius: \n");
fgets(line,sizeof(line),stdin); /***input the data and store in  line variable ***/
sscanf(line,"%f",&rad); /***conversion of input data (char) to float data ***/
radi= pow(rad,3); /***include the option -lm flag in gcc compiler, otherwise gcc does not recognize pow function ***/
sphe= (4/3 * (radi*PI) ); /*** formula for volume of the sphere ***/

printf("the volume of the sphere is: %.2f\n",sphe);




return 0;
}
