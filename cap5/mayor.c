#include <stdio.h>

float mayor (float a, float b, float c);

int main(){
float i,j,k;

printf("por favor ingrese tres numero decimales, separelos por un espacio:");
scanf("%f%f%f", &i,&j,&k);

printf("el numero mas grande de los tres es: %f\n", mayor(i,j,k));


return 0;
}
float mayor (float a, float b, float c){
float may;

may = a;

if(b > may && b > c){
  may = b;
  }
if(c > may && c > b){
  may = c;
  }
return may;
}
