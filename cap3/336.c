#include <stdio.h>

int main(){

int num,uni,deci,centi,mil,diezmil,u,d,c,m,dm,binario;

printf("por favor ingrese un numero binario de max 5 digitos: \n");
scanf("%d",&num);


u = num % 10;
uni = num / 10;

d = uni % 10;
centi = num /100;

c = centi % 10;
mil = num / 1000;

m = mil % 10;
diezmil = num / 10000;

dm = diezmil % 10;
binario= (u*1)+ (d*2) + (c*4)+ (m*8)+ (dm*16);
printf("\tel numero decimal es: %d \n",binario);




return 0;
}
