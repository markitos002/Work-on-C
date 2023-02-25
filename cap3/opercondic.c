#include <stdio.h>

int main(){

int contador=1;

while(contador <= 10){

  printf("%s\n", contador % 2 ? "  **** \t**** \t****" : "++++++++ \t++++++++ \t++++++++");
  contador++;
  }

return 0;
}
