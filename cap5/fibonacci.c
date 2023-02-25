#include <stdio.h>
//funcion recursiva fibonacci
long fibonacci (long n); // prototipo de la funcion

int main(){

long resultado,numero; // resultado es el valor fibo, numero es el que ingresa el usuario para calcular

printf("Ingrese el numero (entero) al que desea calcular el valor fibonacci:\n");
   scanf("%ld",&numero);

resultado = fibonacci(numero);//calcula el valor fibonacci
printf("Fibonacci (%ld) = %ld\n", numero, resultado);// imprime el resultado

return 0;
}
//funcion fibonacci
long fibonacci (long n){
//caso base
if(n == 0 || n==1){
  return n;
   }
else{
  return fibonacci(n -1 ) + fibonacci(n - 2);
  }// fin del else

}//fin de la funcion fibonacci
