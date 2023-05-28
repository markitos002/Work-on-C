// este programa calcula los kilometros por litro en diferentes trayectos y  realiza un promedio general

#include <stdio.h>

int main(){

float lit=0, km, promlocal, promtotal,total=0;
int llenados=0;


while(lit >= 0){
  printf("introduzca los litros utilizados (-1 para terminar) NO ingrese valores de 0 pues sera indeterminado: \n");
  scanf("%f",&lit);
  if(lit != -1){
    printf("introduzca los kilometros recorridos: \n");
    scanf("%f", &km);
      promlocal = km / lit;
      printf("      los kilometros por litro de este tanque fueron: >>> %.2f <<<<\n",promlocal);
        llenados++;
          printf(">>>>>  %d llenado\n",llenados);
   total+=promlocal;
   }
}
promtotal=(float)total / llenados;
printf("******************************************************\n");
printf("*el promedio general de kilometros por litro fue: %.2f*\n",promtotal);
printf("******************************************************\n");
return 0;
}
