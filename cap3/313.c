#include <stdio.h>

int main(){
int x=1, total =0, y;

while(x<=10){
  y= x * x;
  printf("%d\n",y);
  total+= y;
  ++x;
}

printf("el total es: %d\n", total);

return 0;
}
