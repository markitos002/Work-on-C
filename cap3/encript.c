#include <stdio.h>

int main(){

int num,uni,deci,centi,mil,u,d,c,m,aa,bb,cc,dd;

printf("por favor ingrese un numero de 4 digitos para encriptar: \n");
scanf("%d",&num);


u = num % 10;
uni = num / 10;

d = uni % 10;
centi = num /100;

c = centi % 10;
mil = num / 1000;

m = mil % 10;

aa = (u + 7)% 10;
bb = (d + 7)% 10;
cc = (c + 7)% 10;
dd = (m + 7)% 10;

printf("\tel numero encriptado es: %d %d %d %d \n", bb,aa,dd,cc);




return 0;
}
