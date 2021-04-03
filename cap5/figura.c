#include <stdio.h>

void figura (int lado);

int main(){
int n;
printf("Ingrese el tamanio de la figura: \n");
scanf("%d",&n);

figura(n);


return 0;
}
void figura (int lado){
int i,j;
for(i=1;i<=lado;i++){
  for(j=1;j<=lado;j++){
      printf("*");
     }
    printf("\n");
   }
}//fin de la funcion figura
