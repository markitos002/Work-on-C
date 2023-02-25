/************************************************
* Nombre: use pitagoras theorem                 * 
*                                               *
*                                               *
* Proposito: find the sqrt root between 2 given *
* point                                         *
*                                               *
* Uso:enter two coordinates and the program     *
*calculates the distance                        *
************************************************/

/* WARNING: when gcc compiling include -lm flag due to >> pow << and >> sqrt << math functions */


char x[50]; /* line to enter x coordinates*/
char y[50]; /* line to enter y coordinates*/
float distanceX, distanceY;/*declares the distance coordinates*/
double root, root_sqr;/*declares root variables*/
float Xone, Xtwo, Yone, Ytwo; /* declares all the coordinates variables */
double pow_distanceX, pow_distanceY; /* declares the powered coordinates*/

#include <stdio.h>
#include <math.h>

int main(){

printf("please enter the x coordinates:\n");
fgets(x,sizeof(x),stdin);
sscanf(x, "%f %f", &Xone, &Xtwo);/*inputs of x coordinates*/

printf("please enter the y coordinates: \n");
fgets(y, sizeof(y),stdin);
sscanf(y, "%f %f", &Yone, &Ytwo); /*input of y coordinates */

distanceX = Xone - Xtwo;
pow_distanceX = pow( distanceX, 2); /* powered by 2 the x distance */

distanceY = Yone - Ytwo;
pow_distanceY = pow( distanceY, 2); /* powered by 2 the y distance */

root = pow_distanceX + pow_distanceY; /* sums up the x and y powered distances */
root_sqr = sqrt(root); /* it calculates the root square of root distance */

printf(" the distance between the coordinates is: %.3lf\n",root_sqr);


return 0;
}
