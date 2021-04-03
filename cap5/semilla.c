#include <stdio.h>
#include <stdlib.h>
int main(){

int i;
unsigned semilla; //semilla para establecer los numeros aleatorios

printf("Introduzca la semilla: \n");
scanf("%u",&semilla);

srand(semilla); // toma como base la semilla como generador de numero aleatorio

for(i=1;i<=20;i++){
  printf("%10d", 1 + (rand() % 6)); // imprime numero aleatorio entre 1 y 6
    if(i % 5 == 0)
      printf("\n");
   }
return 0;
}
