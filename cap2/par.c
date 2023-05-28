#include <stdio.h>

int main(){

int num;

printf("ingrese un numero entero: \n");
scanf("%d", &num);

if(num%2 == 0){
printf("el numero es par\n\n");
}
  if(num%2 != 0){
  printf("el numero es impar\n\n");
  }

return 0;
}
