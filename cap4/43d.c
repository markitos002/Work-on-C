#include <stdio.h>

int main(){

int x;

for(x=1;x<=20;x++){
   printf("%d",x);
    if((x%5)==0){
      printf("\n");
      }
    else{
       printf("\t");
       }
     }
/*

while(x<=20){
  printf("%d",x);
    if((x%5) == 0){
      printf("\n");
      }
    else{
      printf("\t");
      }
  x++;
  }
printf("\n");
*/
return 0;
}
