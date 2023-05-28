#include <stdio.h>

int main(){

int numcta,limcta,saldo,nuevolim,saldoecd,nuevosaldo,i=1;

for(i=1;i<=3;i++){
printf("por favor ingrese su numero de cuenta:\n ");
  scanf("%d",&numcta);

printf("por favor ingrese su limite de credito (1-20 pts):\n ");
  scanf("%d",&limcta);

printf("por favor ingrese su saldo actual de credito:\n ");
  scanf("%d",&saldo);

   nuevolim= limcta/2;
   nuevosaldo=saldo/2;

   if(nuevosaldo >= (saldo*nuevolim))
     printf("su saldo excede el limite de credito!!!\n ");
   else
     printf("su saldo esta dentro de los limites de credito\n");

printf("su numero de cuenta es: %d\n", numcta);
printf("su nuevo limite de credito es: %d\n", nuevolim);
printf("su nuevo saldo ajustado a limite de credito es: %d\n", nuevosaldo);
printf("cualquier duda comuniquese con la entidad bancaria. Gracias!\n");

}


return 0;
}
