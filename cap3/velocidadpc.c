#include <stdio.h>

int main(){

int x=300000000, y=1 , ciclo1=100000000, ciclo2=200000000, a;
printf("este programa evalua la velocidad de procesamiento del pc mediante conteo.\n");

while(y<=x){
 if(y==ciclo1)
   printf("ciclo1\n");
 if(y==ciclo2)
   printf("ciclo2\n");
  if(y==x)
  printf("ciclo3\n");
   y++;
   a=y;
   printf("%d\n",a);
   }
printf("fin del conteo!!!\n");
return 0;
}
