#include <stdio.h>

int main(){


int a,b;

printf("*** Este programa determina multiplos\n\n ***");
printf("ingrese dos numeros, separelos con un espacio: \n");
scanf("%d%d", &a,&b);

if(a % b == 0){
printf("%d es multiplo de %d\n\n", a,b);
}
   if(a % b != 0){
   printf("%d no es multiplo de %d\n\n", a,b);
   }

return 0;
}
