#include <stdio.h>

float calculaImporte (float h1);

int main(){

float c1,c2,c3;


printf("Ingrese el numero de horas de estacionamiento, para cada cliente:");
scanf("%f%f%f",&c1,&c2,&c3);
printf("Automovil \tHoras \tImporte\n");
printf("1\t\t %.2f\t %.2f\n", c1,calculaImporte(c1));
printf("2\t\t %.2f\t %.2f\n", c2,calculaImporte(c2));
printf("3\t\t %.2f\t %.2f\n", c3,calculaImporte(c3));
printf("Total\t\t %.2f\t %.2f\n", c1+c2+c3 , calculaImporte(c1)+calculaImporte(c2)+calculaImporte(c3));
return 0;
}

float calculaImporte (float h1){

float importe;

if (h1 <= 3){
   importe = 2;
   }
if (h1 > 3){
   importe = 2 + ((h1-3) * 0.5);
   }
if (h1 > 24){
   importe = 10;
   }
return importe;

}// fin de la funcion calculaImporte
