#include <stdio.h>

int main(){

int num,uni,deci,centi,mil,diezmil,u,d,c,m,dm,espacio;

printf("por favor ingrese un entero de 5 digitos: \n");
scanf("%d",&num);

if(num >99999){
   printf("\n XXXXXXX el numero tiene mas de 5 digitos XXXXXX\n" );
   printf("    XXXXXX sin embargo tomare los 5 ultimos  XXXXX\n\n");
   }

if(num <10000){
   printf("\n XXXXX el numero tiene menos de 5 digitos XXXXX\n");
   printf("       XXXX tomare los que ingresaste  XXXX\n\n");
   }
u = num % 10;
uni = num / 10;

d = uni % 10;
centi = num /100;

c = centi % 10;
mil = num / 1000;

m = mil % 10;
diezmil = num / 10000;

dm = diezmil % 10;

printf("\tel numero separado es: \n");
printf("\t %d  %d  %d  %d  %d\n", dm,m,c,d,u);



return 0;
}
