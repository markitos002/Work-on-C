#include <stdio.h>
#include <math.h>

int main(){
double aa,b=1,x=1,y=1,z,a,c,eul,i=1;

//printf("ingrese el numero para generar el factorial: ");
 // scanf("%d", &num);

while(y <= 5){
   z= x*y;
   x= z;
   a= pow(x,y);
   aa= a/z;
   c= b+aa;
   b= c;
   y++;
  printf("%.2f\n",b);
  printf("%.2f\n",aa);
  printf("%.2f\n\n",a);
  }
eul=b;
printf("el e ala x es: %.2f\n",eul);
printf("potencia de 8 ^ 3 %.2f\n", pow (8 , 3));
return 0;
}
