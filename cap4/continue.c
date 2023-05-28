#include <stdio.h>

int main(){

int x;

for(x = 1; x <= 10; x++){
   if(x == 5){
     continue;//ignora el valor de 5
   } //fin del if
  printf("%d\n", x);
}// fin del for

//continue2
return 0;
}
