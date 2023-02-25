#include <stdio.h>
#include <math.h>

double math(double x);//prototipo de la funcion math

int main(){

double valor1;

printf("ingrese el valor para calcuolar la funcion trigonometrica: \n");
scanf("%lf",&valor1);

printf("el valor del calculo es:%.3lf\n\n", math(valor1));

return 0;
}// fin de la funcion main

double math(double x){
double calculo;

calculo = tan (x);

return calculo;
}
