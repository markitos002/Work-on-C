#include <stdio.h>

int main(){

float salario=200, ventas, total;

while(ventas != -1){

 printf("introduzca las ventas en pesos (-1 para terminar): \n");
  scanf("%f", &ventas);
total = salario + (ventas * 9/100);

if(ventas != -1)
 printf("el salario es de: %.2f\n",total);
else
 printf("fin del programa.\n");
}
return 0;
}
