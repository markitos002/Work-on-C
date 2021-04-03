/************************************************
Este programa indica el uso de los array en C

copiado del libro de Oreilly 
************************************************/
#include <stdio.h>

/***se declaran las variables ***/


float data[5]; /***este representa el array ***/
float total;
float average;

int main(){

data[0]=34.6;
data[1]=45.7;
data[2]=98.7;
data[3]=98.7;
data[4]=87.5;

total= data[0]+data[1]+data[2]+data[3]+data[4];
average=total/5.0;
printf("el total es %.2f y el promedio es %.2f\n", total, average);

return 0;
}
