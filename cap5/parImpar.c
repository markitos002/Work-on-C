#include <stdio.h>

int par (int num);

int main(){
int n;

while( n != 0){
printf("ingrese un numero para determinar si es par o impar(cero para terminar): \n");
scanf("%d",&n);
   if(par(n) == 1){
       printf("El numero es par\n");
        }
   else{
        printf("El numero es impar\n");
       }
     }

return 0;
}
int par (int num){

if (num % 2 == 0)
   return 1;
else
   return 0;
}// fin de la funcion par
