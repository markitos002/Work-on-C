// este programa propone ejercicios para practicar las tablas de multiplicar

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int a,b,c,respuesta,respuesta2;

srand(time(NULL));


do{
a= 1+ (rand()%10);
b= 1+ (rand()%10);

printf("Por favor conteste la pregunta relacionada con la multiplicacion de dos cifras. Oprime 0 para terminar\n");
printf("Cuanto es %d multiplicado por %d?: \n",a,b);
scanf("%d",&respuesta);
c = a*b;
if(respuesta == c){
   printf("muy bien, te sabes las tablas!!!\n");
   }

else 
   { 
	while (respuesta =! c)   
   printf("vamos a intentarlo de nuevo :-)\n");
   printf("ingresa de nuevo el valor: \n");
   scanf("%d",&respuesta2);
      if(respuesta2 == c)
	      printf("muy bien eres un duro!!\n");
      else 
	 printf("respasa las tablas y vuelve de nuevo :-(\n");
     }
}while(respuesta != 0);


return 0;
}
