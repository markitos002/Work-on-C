#include <stdio.h>
#include <stdlib.h>
int main(){

int i,y;
//unsigned semilla; //semilla para establecer los numeros aleatorios

//printf("Introduzca la semilla: \n");
//scanf("%u",&semilla);

srand(time (NULL)); // toma como base la semilla como generador de numero aleatorio

for(y=1;y<10;y++){

i = 2 + (rand() % 8); // imprime numero aleatorio entre 2 y 10
if(i%2 != 0){
printf("%d\n",i);
     }
else{
i = i+1;
printf("%d\n",i);
    }
}//fin del for
return 0;
}
