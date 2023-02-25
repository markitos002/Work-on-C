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
int i,res,div;

for(i=1;i<=4;i++){
res=n%10;
printf("%d",res);
div = n/10;
n = div;
}

}// fin de la funcion invertido
