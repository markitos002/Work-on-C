#include <stdio.h>

int main(){

int a,b,c,a2,b2,h2,c2;

for(a=1;a<=1000;a++){
   for(b=1;b<=1000;b++){
      for(c=1;c<=1000;c++){
         a2= a*a;
         b2= b*b;
         c2= c*c;
         h2= a2+b2;
     if(h2 == c2)
       printf("el triple pitagorico es Lado1= %d, Lado2= %d, Hipotenusa= %d\n",a2,b2,c2);
//     else
//     printf("no hay Triple pitagorico\n");
    }
   }
  }

return 0;
}
