#include <stdio.h>
void invertido (int n);

int main(){
int num;
printf("Por favor ingrese un numero: \n");
scanf("%d",&num);

printf("el numero invertido es: \n");
invertido(num);
printf("\n");
return 0;
}

void invertido (int n){
int res,div;

printf("%d\n",n%10);
if(n > 9){
   invertido(n/10);
   }
//printf("%d\n",n%10);// la impresion posterior genera que no se invierta el numero


}// fin de la funcion invertido
