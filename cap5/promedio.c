#include <stdio.h>

char puntosCalidad (int x);

int main(){
int x=0,nota,i=0,promedio;
do{
printf("ingrese sus calificaciones para determinar el promedio y evaluar el desempenio. Oprima 0 para terminar\n");
scanf("%d",&nota);
x+=nota;
i++;
}while(nota != 0);
promedio = x/(i-1);
printf("su promedio fue de %d\n", promedio);
printf("El desempenio de acuerdo a sus calificaciones fue: \n");
puntosCalidad(promedio);

return 0;
}
char puntosCalidad (int x){
printf("%d\n",x);

if(x >= 90 && x <= 100){
  printf ("%s", "4 de desempenio\n");
    }

else if(x >= 80 && x <= 89){
  printf ("%s","3 de desempenio\n");
    }

else if(x >= 70 && x<= 79){
  printf ("%s", "2 de desempenio\n");
    }

else if(x >= 60 && x<= 69){
  printf ("%s", "1 de desempenio\n");
    }

else{
  printf ("%s", "0 de desempenio\n");
    }

}//fin de la funcion puntosCalidad
