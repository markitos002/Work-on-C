#include <stdio.h>

int main(){

int y=0,z=0,a=0;


do{
    printf("introduzca los numeros a promediar, 9999 para finalizar: \n");
    scanf("%d",&z);
     a=a+z;
     y++;
     }while(z != 9999);

printf("el promedio de los de los numeros es: %d\n",(a-9999)/(y-1));

return 0;
}
