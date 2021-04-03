/************************************************
* Nombre: Array                                 * 
*                                               *
*                                               *
* Proposito: entender y usar un array           *
*                                               *
*                                               *
* Uso:Imprime la suma de los elements del array *
*                                               *
************************************************/

#include <stdio.h>

float data[5]; /*** se declara  la variable data y asigna 5 elemtentos al array ***/
float total; /*** declara la variable total, para totaliza la suma ***/
float average; /*** declara la variable average para guardar el promedio ***/

int main(){

data[1]=45.8;
data[2]=85.8;
data[3]=95.8;
data[4]=75.8;
data[5]=35.8;

total= data[1]+data[2]+data[3]+data[4]+data[5];
average= total / 5;
printf("el promedio del arreglo es %.2f\n",average);
printf("la suma total del array es %.2f\n",total);

return 0;
}
