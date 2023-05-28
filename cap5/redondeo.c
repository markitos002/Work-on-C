#include <stdio.h>
#include <math.h>

float redondeo(float x);

int main(){
float num;

do{
printf("Ingrese el numero que desea redondear, ingrese -1 para terminar: \n");
scanf("%f",&num);

printf("El valor del numero redondeado es: %.2f\n", redondeo(num));
}
while( num != -1);

return 0;
}

float redondeo(float x){

float y;
y = floor((x + 0.5));
return y;

}// fin de la funcion redondeo
