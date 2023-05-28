#include <stdio.h>

int main(){

float horas=0,extras, valor, salario;

while(horas != -1){
  printf("ingrese el numero de horas (ingrese -1 para terminar): \n");
   scanf("%f",&horas);
  if(horas != -1){
  printf("ingrese el valor de la hora: \n");
    scanf("%f",&valor);
  if(horas <= 40)
   extras= 0;
  else
   extras = horas - 40;
  
 salario= (horas * valor)+ (extras * valor * 0.5);
printf("las horas extras son: %.2f\n",extras);
printf("el salario del empleado es:  %.2f\n", salario);
  }
}
return 0;
}
