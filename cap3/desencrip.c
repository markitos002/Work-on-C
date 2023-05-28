#include <stdio.h>

int main(){

int num,uni,deci,centi,mil,u,d,c,m,aa,bb,cc,dd;

printf("por favor ingrese el numero encriptado: \n");
scanf("%d",&num);


u = num % 10;
uni = num / 10;

d = uni % 10;
centi = num /100;

c = centi % 10;
mil = num / 1000;

m = mil % 10;

printf("%d %d %d %d\n", u, d, c, m);

if(u <= 7){
  u = u+10;
  aa= u - 7;
  }
else
  aa = u - 7;
  if (d <= 7){
   d = d+10;
   bb = d - 7;
   }
  else
    bb = d - 7;
     if(c <= 7){
       c = c+10;
       cc = c -7;
       }
     else
        cc = c - 7;
         if(m <= 7){
            m = m+10;
            dd = m - 7;
            }
         else
            dd = m - 7;

if(aa==10)
aa=0;
if(bb==10)
bb=0;
if(cc==10)
cc=0;
if(dd==10)
dd=0;

printf("\tel numero desencriptado es: %d %d %d %d \n", bb,aa,dd,cc);




return 0;
}
