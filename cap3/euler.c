#include <stdio.h>

int main(){
float b=1,x=1,y=1,z,a,c,eul;

//printf("ingrese el numero para generar el factorial: ");
 // scanf("%d", &num);

while(y <= 10){
   z= x*y;
   x= z;
   a= 1/z;
   c= b+a;
   b= c;
   y++;
  printf("%.6f\n",b);
  }
eul=b;
printf("el factorial euler es: %.5f\n",eul);
return 0;
}
