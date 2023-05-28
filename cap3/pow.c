// el siguiente programa calcula x en potencia de y

#include <stdio.h>

int main(){

int x,y,pow=1,i=1;
printf(" >>> Este programa calcula la potencia de X en funcion de Y  <<<<\n\n" );
printf("\tingrese el valor de x: \n");
scanf("%d",&x);
printf("\tingrese el valor de y: \n");
scanf("%d",&y);

while(i <= y){
  pow*=x;
  i++;
  }

printf("\tel valor de la potencia es: %d\n\n",pow);
return 0;
}
