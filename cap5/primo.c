#include <stdio.h>

void primo(int numero);

int main(){
int n,j,k=0;
printf("Escriba un numero para determinar si es un mumero primo: \n");
printf("recurede que un numero primo solo es divisible por 1 y por el mismo\n");
scanf("%d",&n);

for(j=1;j<=n;j++){
  primo(j);
   }
return 0;
}
void primo(int numero){
int res,i,primo,k=0;
for(i=1;i<=numero;i++){
    res = numero%i;
   if(res == 0 && i != numero){
    primo = i;
        }
       }
   if(primo == 1){
     printf("%d\n", numero);
     }
}// fin de la funcion primo
