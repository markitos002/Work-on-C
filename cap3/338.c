#include <stdio.h>

int main(){

int x=0,y=1,z;

printf("este programa imprime asteriscos, salta de 10 en 10\n");

while(x<80){
  y=x%10;
  z=x%2;
  if(y==0){
    printf("\n");
    }
    if(z==1)
    printf("* ");
    else
    printf(" ");
    x++;
    }
printf("\n\n");

return 0;
}
