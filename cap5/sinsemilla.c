#include <stdio.h>
#include <stdlib.h>
int main(){

int i;
//unsigned semilla; //semilla para establecer los numeros aleatorios

//printf("Introduzca la semilla: \n");
//scanf("%u",&semilla);

srand(time (NULL)); // toma como base la semilla como generador de numero aleatorio

for(i=1;i<=10;i++){
  printf("%10d", 2 + (rand() % 10)); // imprime numero aleatorio entre 1 y 6
    if(i % 2 == 0)
      printf("\n");
   }
return 0;
}
