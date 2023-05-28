#include <stdio.h>

int cubo(int y);
int main(){

int x,valor;
printf("ingrese el valor al que desea calculale el cubo:\n");
scanf("%d",&x);

valor = cubo(x);

printf("el valor del cubo es: %d\n", valor);

return 0;
}
int cubo (int y){
int cu;
cu = y * y *  y;

return cu;

}
