#include <stdio.h>

int main(){

int product;

printf("ingrese el valor del producto entre 2-10: \n\n");
scanf("%d", &product);
printf("\n");
while(product <= 1000 ){
   product = 2 * product;
   printf("%d\n",product);
   }

return 0;
}
