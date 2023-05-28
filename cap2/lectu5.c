
#include <stdio.h>

int a,b,c,d,e,min,max;

int main(){

 printf("introduzca 5 numeros separados por un espacio:\n");
 scanf("%d%d%d%d%d",  &a,&b,&c,&d,&e);
  

  
max=a;
if(b>max){
max=b;
  }
  if(c>max){
    max=c;
    }
     if(d>max){
       max=d;
       }
        if(e>max){
          max=e;
          }
min=a;
if (b<min){
  min=b;
   }
   if(c<min){
    min=c;
    }
      if(d<min){
       min=d;
       }
         if(e<min){
           min=e;
	   }

if(min != max){
printf("el numero mas pequeno es %d\n",min);
printf("el numero mas grande es %d\n",max);
}
if (min == max){
 	printf("no comparo, los numeros son todos iguales.\n");
	}
return 0;
}
