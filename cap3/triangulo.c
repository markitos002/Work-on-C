#include <stdio.h>

int main(){

int a,b,h,a2,b2,h2,c2;

printf("ingrese los tres lados del triangulo para determinar\n");
printf("si pertenecen a un triangulo rectangulo.\n");
printf("ingresar primero lados y luego hipotenusa. separar por un espacio:\n");
  scanf("%d%d%d", &a,&b,&h);

a2= a*a;
b2= b*b;
h2= h*h;
c2= a2+b2;

if(h2 == c2)
  printf("las medidas SI corresponden a las de un triangulo rectangulo\n");
else
  printf("las medidas NO corresponden a las de un triangulo rectangulo\n");


return 0;
}
