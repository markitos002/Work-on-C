#include <stdio.h>

int main(){

int num,uni,deci,centi,mil,diezmil,u,d,c,m,dm,a=0,b=0,ce=0,de=0,e=0,binario;
printf("este programa determina e imprime la cantidad de 7's\n");
printf("por favor ingrese un numero (max 5 digitos): \n");
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
if(u==7)
 a=1;
if(d==7)
 b=1;
if(c==7)
 ce=1;
if(m==7)
 de=1;
if(dm==7)
 e=1;

binario= a+b+ce+de+e;
printf("\tel numero de 7's es: %d \n",binario);

return 0;
}
