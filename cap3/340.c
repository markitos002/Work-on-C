#include <stdio.h>

int main(){

int x=0,y=0,a=0,b=0;

printf("este programa imprime asteriscos, salta de 8 en 8\n");

while(x<64){
  y=x%8;
  

  if(y==0){
    printf("\n");
    a++;
     }
    if(a%2){
      printf("* ");
      }
    else {
      printf(" *");
      }
      x++;
  }
printf("\n\n");

return 0;
}
