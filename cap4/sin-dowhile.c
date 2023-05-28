#include <stdio.h>

int main(){

int contador=1,contador2=2,x,total=0;

do{
printf("%d\n",contador);
}while(++contador<=10);

do{
 if(contador2 % 2 == 0){
   printf("%d\n",contador2);
  contador2 +=2;
    }
  }
  while(contador2 <= 100);

for(x=100; x <= 150; x++){
   total+= x;
   printf("%d\n",total);
   } 
return 0;
}
