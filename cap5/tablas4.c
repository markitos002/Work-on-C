//este programa propone preguntas relacionadas con las tablas de multiplicar, incentivando al estudiante 
//a mejorar en el aprendizaje de este importante tema.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int a,b,i,c=0,d=0,j,k,result,preguntas;
char nombre[50];
printf("Por favor ingresa tu nombre: ");
scanf("%s",nombre);
printf("cuantas preguntas deseas?: ");
scanf("%d",&preguntas);
//char nombre[50];

for(i=1;i<=preguntas;i++){

srand(time(NULL));

a = 1+(rand()%10);
b = 1+(rand()%10);

printf("%d) %s Dime Cuanto es %d multiplicado por %d:",i,nombre,a,b);
printf("\n\n");
for(j=1;j<=a;j++){
  for(k=1;k<=b;k++){
      printf("* ");
      }
      printf("\n");
         }
      printf("\n");
scanf("%d",&result);
if(result == a*b){
 c++;
 switch(a){
	 case 1: printf("Muy bien\n");break;
	 case 2: printf("Muy bien\n");break;
	 case 3: printf("Felicitaciones\n");break;
         case 4: printf("Muy bien\n");break;
         case 5: printf("Buen trabajo\n");break;
         case 6: printf("Muy bien\n");break;
         case 7: printf("Sigue asi!\n");break;
         case 8: printf("Muy bien\n");break;
         case 9: printf("Eres muy bueno/a!!\n");break;
         case 10: printf("Muy bien\n");break;
         }
   }
else{
	while(result != a*b){
        d++;
      switch(a){
	 case 1: printf("%s Sigue adelante\n",nombre);break;
	 case 2: printf("%s No te rindas\n",nombre);break;
	 case 3: printf("%s intentalo de nuevo\n",nombre);break;
         case 4: printf("Practica mas\n");break;
         case 5: printf("Pronto lo lograras %s\n",nombre);break;
         case 6: printf("%s Solo intentalo varias veces\n",nombre);break;
         case 7: printf("Yo se que puedes %s no te rindas\n",nombre);break;
         case 8: printf("Vamos,%s no es hora de rendirse\n",nombre);break;
         case 9: printf("Nada de rendirse %s, sigue intentando!!\n",nombre);break;
         case 10: printf("Ya casi %s, no te rindas\n",nombre);break;
         }

          printf("%d) %s Dime Cuanto es %d multiplicado por %d:",i,nombre,a,b);
          printf("\n\n");
          for(j=1;j<=a;j++){
            for(k=1;k<=b;k++){
               printf("* ");
              }
                printf("\n");
                 }     
                 printf("\n");
                 scanf("%d",&result);

        }          
    }
 }
printf("Resultados: \n");
printf("Acertados: %d\n",c);
printf("Fallados: %d\n",d);
if(d >= preguntas*3/4 ){
  printf("%s Por favor pide ayuda adicional a tu profesor!!!\n", nombre);
  }
return 0;

}
