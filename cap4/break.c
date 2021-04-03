#include <stdio.h>

int main(){
int x; //contador


for(x = 1; x <= 10; x++) {

   if(x == 5){
     break;
     }
printf("%d \n",x);
}

printf("rompe el ciclo en x== %d\n", x);

return 0;
}
