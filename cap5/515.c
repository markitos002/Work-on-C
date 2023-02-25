#include <stdio.h>
#include <math.h>

double hipo (double cat1, double cat2);//prototipo de la funcion

int main(){
double a;
double b;

printf("ingrese los valores de los catetos, separados por un espacio:\n");
scanf("%lf%lf",&a,&b);

printf("el valor de la hipotenusa es: %.2lf\n", hipo(a,b));


return 0;
}// fin de la funcion main

double hipo (double cat1, double cat2){

double h2;
double h;

h2 = (cat1*cat1)+(cat2*cat2);
h = sqrt(h2);

return h;

}// fin de la funcion hipo
