#include <stdio.h>

int main(){

int x,y,z,a=0;

printf("introduzca la cantidad de valores que va a sumar: \n");
  scanf("%d",&y);

for(x=1; x<=y; x++){
    printf("introduzca el numero a sumar: \n");
    scanf("%d",&z);
    a=a+z;
   }
printf("la suma de los numeros es: %d\n",a);

return 0;
}
