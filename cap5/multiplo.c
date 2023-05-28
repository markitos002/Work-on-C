#include <stdio.h>

int multiplo(int x, int y);

int main(){

int a,b;

printf("calcula si el primer numero es multiplo del segundo\n");
printf("ingrese el primer numero: \n");
scanf("%d",&a);
printf("ingrese el segundo numero: \n");
scanf("%d",&b);

if ( multiplo(a,b) == 1){
  printf("el primer numero si es multiplo del segundo\n");
   }
else {
  printf("el segundo numero no es multiplo del segundo\n");
  }

return 0;
}//fin de la funcion main

int multiplo(int x, int y){

if(x % y == 0){
  return 1;
  }
else {
  return 0;
  }

}// fin de la funcion multiplo
