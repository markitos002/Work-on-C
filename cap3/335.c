#include <stdio.h>

int main(){

int a,b,c,d,e,f,g,h,i,j,numero;

printf("ingrese un numero de 5 digitos para determinar si es palindromo: \n");
scanf("%d", &numero);

a= numero /10;
b= a/10;
c= b /10;
d= c /10;
e= d /10;
f= numero % a;
g= a % b;
h= b %c;
i= c % 10;
j= d % 100;

  if(f==j || g==i)
   printf("el numero es un palindromo!!\n");
  else
   printf("el numero no es palindromo :-(\n");
  
return 0;
}
