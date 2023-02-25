#include <stdio.h>

int cubo(int y);
int main(){

int x,valor,i;
printf("ingrese el valor al que desea calculale el cubo:\n");
scanf("%d",&x);

for(i=1;i<=x;i++){
 // valor = cubo(x);
  printf("%d\n",cubo(i));
   }

return 0;
}
int cubo (int y){
int cu;
cu = y * y *  y;

return cu;

}
