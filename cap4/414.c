#include <stdio.h>

int main(){

int x,y,a=1;

printf("introduzca el valor al que desea calcular el factorial: \n");
  scanf("%d",&y);

for(x=1; x<=y; x++){
   printf("%d\n",x); 
   a*=x;
   }
printf("el factorial del numero es: %d\n",a);

return 0;
}
