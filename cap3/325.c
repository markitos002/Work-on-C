#include <stdio.h>

int main(){

int x=0;

printf("N \t 10*N \t 100*N \t 1000*N\n");

while(x<=9){
x++;
printf("%d \t %d \t %d \t %d\n",x,x*10,x*100,x*1000);
}
printf("\n");
return 0;
}
