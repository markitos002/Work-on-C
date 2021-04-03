#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void adivina(void);
int repetir (int x, int y);

int main(){

adivina();

return 0;
}
void adivina(void){

int a,numero;
char o;

printf("\tBienvenido al juego:\n");
printf(">>>>  ADIVINA EL NUMERO  <<<<<\n");
printf("Generando el numero...\n");

srand(time(NULL));
a = 1+(rand()%1000);
system("sleep 2");

printf("Listo!!!, Intentalo, cual es?:\n");
scanf("%d",&numero);

if(numero == a ){
   printf("Vaya adivinaste, como que eres brujo!!!\n");
   }
else{
   printf("Que triste, no le pegas ni al mundo hinchado :-(\n");
   repetir(numero,a);
  }

printf("Por Fin!! estuvo divertido  no?\n");
printf("Quieres volver a jugar de nuevo S o N?\n");
scanf(" %c",&o);

if(o == 'S'  || o == 's'){
adivina();
   }
else{
   printf("Gracias por jugar, intentalo despues!!\n");
   }
}// fin de la funcion adivina

int repetir (int x, int y){
int i;
    while(i != y){
   printf("ingresa de nuevo el numero:\n");
   scanf("%d",&i);
   if(i > y){
     printf("Pista: muy alto, intente un numero mas bajo!\n");
            }
   else if(i < y){
     printf("Pista: muy bajo, intente un numero mas alto!\n");
     }
   else 
      i = y;
	  }
	
}//fin de la funcion repetir
