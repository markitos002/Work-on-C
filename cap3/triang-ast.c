#include <stdio.h>

int main(){

int lado, columna, cont=1;

printf("el siguiente programa dibuja un cuadrado de asteriscos.\n");
printf("indique el tamano del cuadrado (entre 1-20): \n");
  scanf("%d", &lado);

while( lado >= 1){
  columna =1;
   while(columna <= lado){
    printf("%s", lado % 2 ? "*" : "*");
    columna++;
   }
  lado--;
  printf("\n");
}

return 0;
}
