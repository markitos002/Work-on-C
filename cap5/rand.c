#include <stdio.h>
#include <stdlib.h>
//cambio de enteros producidos por 1+rand

int main(){

int i;

for(i=1;i<=20;i++){
   printf("%10d",  (rand() % 6));// imprime un numero aleatorio entre 1 y 6
     if( i % 5 == 0){
     printf("\n");
     }
}

return 0;
}
