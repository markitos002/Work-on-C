#include <stdio.h>

int main(){

float prestamo,tasa,dias,monto;

while (prestamo != -1){

   printf("ingrese el monto del prestamo: \n");
     scanf("%f",&prestamo);
 if(prestamo != -1){
   printf("ingrese la tasa de interes efectiva anual: \n");
     scanf("%f",&tasa);
   printf("ingrese el periodo del prestamo en dias: \n");
     scanf("%f",&dias);

 monto = prestamo * tasa * (dias/365);

   printf("el monto del interes es de: %.2f\n",monto);
 }
 else
    printf(" fin del programa \n");
  }
return 0;
}
