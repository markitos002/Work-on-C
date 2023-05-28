#include <stdio.h>
#include <math.h>
// el programa calcula el interes anual de un deposito

int main(){

double monto, principal= 1000.0, tasa= .05; //monto corresponde al acumulado de principal + interes ganado
int anio;

//encabezado
printf("%4s%21s\n", "Anio","Monto del deposito");

//calculo del deposito

for(anio=1;anio<=10;anio++){
//calcula nuevo monto
    monto= principal * pow(1.0 + 0.05, anio);
    printf("%4d%21.2f\n",anio,monto);
}//fin del  for


return 0;
}
// no olvidar incluir la opcion -lm al final para el compilador
