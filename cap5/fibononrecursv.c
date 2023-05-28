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
long a=1,b=1,c,i;

for(i=1;i<=n;i++){
c=a+b;
b=a;
a=c;
}
return c;
}//fin de la funcion fibonacci
