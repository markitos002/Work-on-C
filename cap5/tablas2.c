// este programa propone ejercicios para practicar las tablas de multiplicar

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int a,b,c,d,e,respuesta,respuesta2;

srand(time(NULL));

a= 1+ (rand()%10);
b= 1+ (rand()%10);

printf("Por favor conteste la pregunta relacionada con la multiplicacion de dos cifras.\n");
printf("Cuanto es %d multiplicado por %d?: \n",a,b);
scanf("%d",&respuesta);
c = a*b;
 while(respuesta != c){
    e= 1 +(rand()%4);
   switch(e){
   case 1: printf("No te rindas!!\n");break;
   case 2: printf("Incorrecto trata una vez mas!\n");break;
   case 3: printf("No por favor, intenta de nuevo\n");
   case 4: printf("No, sigue intentando\n");
        }
   printf("ingresa de nuevo el valor: \n");
   scanf("%d",&respuesta);
     }
   d= 1+(rand()%4);
   switch(d){
   case 1: printf("Muy bien excelente!!\n");break;
   case 2: printf("Excelente\n");break;
   case 3: printf("Manten tu buen rendimiento\n");break;
   case 4: printf("Buen trabajo!!\n");break;
        }

return 0;
}
