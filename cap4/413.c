#include <stdio.h>

int main(){

int impar, i, total=1;

for(i=1;i<=15;i+=2){
  impar=i;
  printf("%d\n",total*=impar);
  }
return 0;
}
