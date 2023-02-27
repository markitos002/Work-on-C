#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivina(void);
void again(void);
void final(int z);
int repetir (int x, int y);

int main(){

adivina();
again();

return 0;
}

void adivina(void){

int a,numero,w;


printf("\tBienvenido al juego:\n");
printf(">>>>  ADIVINA EL NUMERO 1 entre 1000 <<<<<\n");
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
   w = repetir(numero,a);
   final(w);
   }
}// fin de la funcion adivina

// inicio de la funcion repetir
int repetir (int x, int y){
int i,r=1;
    while(i != y){
    r++;
   printf("ingresa un nuevo numero:\n");
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
 return r;
}//fin de la funcion repetir

//inicio de la funcion again
void again (void){
char o;

printf("Quieres volver a jugar de nuevo S o N?\n");
scanf(" %c",&o);

if(o == 'S'  || o == 's'){
adivina();
   }
else{
   printf("Gracias por jugar, intentalo despues!!\n");
   }
}//fin de la funcion again

//inicio de la funcion final
void final (int z){

   printf("Por Fin!! estuvo divertido  no?\n");
   
if(z < 10){
   printf("O usted Sabe el secreto,o tiene mucha suerte!!\n");
   }
else if(z > 10){
   printf("muchos intentos, usted puede hacerlo mejor, pruebe y vera!!\n");
     }
else {
   printf("Es cierto usted sabe el secreto!\n");
     }

}///fin de la funcion final
