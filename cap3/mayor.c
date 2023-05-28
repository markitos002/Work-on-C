#include <stdio.h>

int main(){

int mayor=0, numero=0, cont=1;

while(cont <=10){
  printf("ingrese un numero entero opcion (%d) de 10 opciones\n",cont);
    scanf("%d",&numero);
  if(numero> mayor)
    mayor = numero;
 cont++;
  }
printf("el numero mas grande de los ingresados fue: %d\n",mayor);


return 0;
}
