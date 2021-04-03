#include <stdio.h>

int main(){

int fila=10,columna;

while(fila>=1){ //repite el ciclo hasta que fila sea menor que 1
  columna=1; // establece columna para iterar

  while(columna <=10){//repite 10 veces
    printf("%s", fila % 2 ? "<<<<<<  " : ">>>>>  >"); // salida
    columna++; // incrementa la columna
 }// fin del while interno
 fila--;
 printf("\n");
}//fin del while externo

return 0;
}
