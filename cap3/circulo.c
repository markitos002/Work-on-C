#include <stdio.h>


int main(){
   float circu,area,pi=3.1416,radio,diametro;

printf("por favor ingrese el radio del circulo: \n");
scanf("%f", &radio);


area= pi * (radio*radio);
diametro= 2 * radio;
circu= pi * diametro;

printf("el area del circulo es %.2f\n", area);
printf("el diametro del circulo es %.2f\n",diametro);
printf("la circunferencia del circulo es %.2f\n",circu);



return 0;
}
