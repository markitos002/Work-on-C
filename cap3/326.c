#include <stdio.h>

int main(){

int x=0;

printf("A \t A+2 \t A+4 \t A+6\n");

while(x<=14){
x+=3;// equivalente a x = x + 3
printf("%d \t %d \t %d \t %d\n",x,x+2,x+4,x+6);
}
printf("\n");
return 0;
}
