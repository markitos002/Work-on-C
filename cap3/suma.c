// este programa realiza la suma de numeros de 1-10

#include <stdio.h>

int main(){

int suma=0, x=1;

while(x <= 11){
 suma+= x;
 x++;
 
 printf("La suma es igual a: %d\n",suma); //imprime la suma
 }
return 0;
}// fin de la funcion main
