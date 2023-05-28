#include <stdio.h>

int main(){

float z,b=1,y=1,a;

while(y<=200000){
  z= 1/y;
  a= b+z;
  b= a;
  y++;
  printf("%.2f\n",b);
  }
printf("el resultado es: %.2f\n",(b-1));

return 0;
}
