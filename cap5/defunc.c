#include <stdio.h>

int cuadrado( int y ); // prototipo de la funcion

int main(){ 

int x; // contador

for(x=1;x<=10;x++){
   printf("%d\n", cuadrado( x ));
   }
printf("\n");
return 0;
}
// definicion de la funcion cuadrado
int cuadrado (int y ){
    return y * y; // devuelve el cuadrado de y * y
  }// fin de la funcion cuadrado

