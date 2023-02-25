#include <stdio.h>

int main(){

int   a=0,b=0,c=0,d=0,e=0,producto=0;
float prod1=2.98,prod2=4.5,prod3=9.98,prod4=4.49,prod5=6.87;

printf("De la siguiente lista de productos y precios, indique la cantidad vendida para cada uno: \n");
printf("presione Ctrl + d para terminar.\n");
printf("***********************************\n");
printf("numero de producto	precio\n");
printf("1			$ 2.98\n");
printf("2			$ 4.50\n");
printf("3			$ 9.98\n");
printf("4			$ 4.49\n");
printf("5			$ 6.87\n");

printf("**********************************");
printf("\n\n");
printf("presione 1 para indicar la cantidad posteriormente o ctrl + d para terminar.\n");

while((producto = getchar()) != EOF ){

    switch(producto){

     printf("indique el numero de producto:\n");

     case '1':
     printf("cantidad vendida:\n ");
     scanf("%d",&a);
     prod1 = prod1 * a;
     printf("presione 2 para indicar la cantidad de producto  o ctrl + d para terminar.\n");
     break;

     case '2':
     printf("cantidad vendida:\n ");
     scanf("%d",&b);
     prod2 = prod2 * b;
     printf("presione 3 para indicar la cantidad de producto o ctrl + d para terminar.\n");
     break;

     case '3':
     printf("cantidad vendida:\n ");
     scanf("%d",&c);
     prod3 =prod3 * c;
     printf("presione 4 para indicar la cantidad de producto  o ctrl + d para terminar.\n");
     break;

     case '4':
     printf("cantidad vendida:\n ");
     scanf("%d", &d);
     prod4 = prod4 * d;
     printf("presione 5 para indicar la cantidad de producto o ctrl + d para terminar.\n");
     break;

     case '5':
     printf("cantidad vendida:\n ");
     scanf("%d", &e);
     prod5 = prod5 * e;
     printf("No ingrese mas productos, ctrl + d para terminar.\n");
     break;
     case '\n':
     case '\t':
     case ' ':
     break;

default: 
     printf("introdujo un numero incorrecto");
     printf("introduzca un nuevo numero valido: \n");
     break;
     }
}

printf("El resumen de items vendidos fue:\n");
printf("  prodcuto 1: %d\n  producto 2: %d\n  producto 3: %d\n  producto 4: %d\n  producto 5: %d\n", a,b,c,d,e);
printf("El valor total vendido fue: %.2f\n", prod1+prod2+prod3+prod4+prod5);


return 0;
}
