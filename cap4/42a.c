#include <stdio.h>

int main(){

int suma=0,cuenta=0;

for(suma=0;suma <= 99;suma++){
  if((suma%2)!=0){
    cuenta+=suma;
     printf("%d\n",cuenta);
     }
    }



/*
while (suma <= 99){
   suma= suma + 1;
  if((suma%2)!=0){
   cuenta = cuenta+suma;
   printf("%d\n",cuenta);
   }
  suma++;
  }
*/

return 0;
}
