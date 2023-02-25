#include <stdio.h>

int main(){

int  y=0, x=1, barra;

printf("ingrese el tamano y espacio de la barras:");
  scanf("%d", &barra);

while( x <= barra){
     y=1;
    while(y<= barra ){
    if(y == 1 || y == barra)
      printf("%s", "*");
    else
      printf("%s", " ");
    y++;
    }
  x++;
  printf("\n");
}
return 0;
}
