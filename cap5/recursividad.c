#include <stdio.h>

//funcion factorial recursiva
long factorial(long numero); //prototipo de la funcion

int main(){

int i; //contador

   for(i=0;i<=10;i++){
      printf("%2d! = %ld\n",i,factorial(i));
      }//fin del for

return 0;
}// fin del main

long factorial( long numero){ //definicion de la funcion
//caso base
  if(numero <=1){
    return 1;
    }
  else{
    //paso recursivo
     return (numero * factorial(numero - 1));
     }
}// fin de la funcion factorial
