#include <stdio.h>

void figura (int lado, char charLlenado);

int main(){
int n;
char c;
printf("Ingrese el tamanio de la figura: \n");
scanf("%d",&n);
printf("ingrese el caracter deseado: \n");
scanf(" %c",&c);//es critico poner el espacio antes del ingreso del caracter, esto por temas del buffer de c

figura(n,c);


return 0;
}
void figura (int lado, char charLlenado){

int i,j;

for(i=1;i<=lado;i++){
  for(j=1;j<=lado;j++){
      printf("%c", charLlenado);
     }
    printf("\n");
   }
}//fin de la funcion figura
