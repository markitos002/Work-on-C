#include <stdio.h>

int main(){

int calif;
printf("\n\n");
printf("ingrese la calificacion de 0 a 100 para conocer el concepto:\n\n");
scanf("%d", &calif);

if(calif >= 90 )
   printf("muy buena nota!!\n\n");
else if(calif >= 80)
   printf("muy bien, puedes hacerlo mejor\n\n");
else if(calif >= 70)
   printf("bien, trata de mejorar\n\n");
else if(calif >= 60)
   printf("regular, estudia mas\n\n");
else printf("reprobaste, evalua que paso!\n\n");


return 0;
}
