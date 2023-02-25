#include <stdio.h>
void invertido (int n);

int main(){
int num;
printf("Por favor ingrese un numero de 4 digitos: \n");
scanf("%d",&num);

printf("el numero invertido es: \n");
invertido(num);
printf("\n");
return 0;
}

void invertido (int n){
int  res,res2,res3,res4,numero3,numero2,numero;

res = n%10;
numero = n/10;
res2 = numero%10;
numero2 = numero/10;
res3=numero2%10;
numero3=numero2/10;
res4=numero3%10;

printf("%d%d%d%d",res,res2,res3,res4);

}// fin de la funcion invertido
