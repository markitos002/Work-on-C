#include <stdio.h>

int main(){

int area, radio=0, diam=0;

printf("por favor ingrese el radio del circulo en centimetros\n");
scanf("%d", &radio);

diam= radio*2;

printf("el diametro del circulo es %d centimetros\n", diam);

area= (radio*radio) * 3.1416;

printf("el area del circulo es %d centimetros cuadrados\n", area);


return 0;
}
