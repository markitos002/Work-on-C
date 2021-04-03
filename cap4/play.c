#include <stdio.h>

int main(){

int c,f,l;

for(c=1;c<=10;c++){
   for(f=10;f>=c;f--){
      if(f-c >= 1)
      printf("&");
        else{
         for(l=1;l<=f;l++)
        printf("*");}
   }
printf("\n");
}



return 0;
}
