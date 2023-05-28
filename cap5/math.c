#include <stdio.h>
#include <math.h>

double math(double x, double y);//prototipo de la funcion math

int main(){

double valor1;
double valor2;

printf("ingrese dos valores para realiza el calculo: \n");
scanf("%lf%lf",&valor1,&valor2);

printf("el valor del calculo es:%.3lf\n\n", math(valor1,valor2));

return 0;
}// fin de la funcion main

double math(double x, double y){

double calculo;

calculo = fmod (x,y);

return calculo;
}
