#include <stdio.h>

int main(){

float saldoIn,ch,cred,saldoFi,lim;
int cont,numcta=0;

while(numcta != -1){
  printf("ingrese numero de cuenta (-1 para terminar): ");
    scanf("%d", &numcta);
if(numcta !=-1){
  printf("\n");
  printf("ingrese el saldo inicial: ");
    scanf("%f", &saldoIn);
  printf("\n");
  printf("ingrese total de cargos: ");
   scanf("%f",&ch);
  printf("\n");
  printf("ingrese el total de creditos: ");
   scanf("%f",&cred);
  printf("ingrese el limite de credito aprobado: ");
   scanf("%f", &lim);
 saldoFi= saldoIn+ch-cred;
 }
  if(saldoFi > lim){
      printf("limite de credito: %.2f\n", lim);
      printf("saldo: %.2f\n", saldoIn+ch-cred);
      printf(">>>>>    limite de credito excedido !!!\n");
 }

}

return 0;
}
