#include <stdio.h>

int main(){

int aprob=0,reprob=0,estud=1,result;

while(estud <=10){

   printf("introduzca el resultado 1 aprobado 0 2 reprobado(estudiante %d): ",estud);
     scanf("%d",&result);
if(result > 2 || result < 1){
  printf("introduzca el resultado corecto, 1 aprobado 0 2 reprobado (%d estudiante)\n", estud);
  estud--;
  }
  else if(result == 1)
      aprob+=1;
   else
      reprob+=1;
estud++;
}

printf("aprobados: %d\n",aprob);
printf("reprobados: %d\n",reprob);
  if(aprob > 8)
   printf("objetivo alcanzado\n");

return 0;
}
