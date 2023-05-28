#include <stdio.h>

int main(){

int i,j,l;
float pi=0, b=0,a=4,c=0,e=0,f=0,g=0,h=0,d=0;

for(i=1;i<50000;i+=4){
    // printf("%d\n",i);
   for(j=1;j<=2;j++){
     if (j%2 !=0){
       b=(a/i);
       c=b;
       g=g+c;}
//        printf("g: %.2f\n",g);}
     else {
        b=(a/(i-2));
        e=b;
        h=(h+e);}
  //        printf("h: %.2f\n",h);}
   }
// pi=g-(h+4);
// printf("pi: %.5f\n",pi);
 }
pi=g-(h+4);
printf("%.5f\n",pi);
return 0;
}
