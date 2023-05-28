/************************************************
Este programa selecciona de 10 numeros el mayor *
y el menor					*
						*
autor: marco avila				*
el proposito es educativo-nivel principiante	*

Ejecucion: para ejecutar el programa		* 
ingrese 10 numeros				*
************************************************/


 #include <stdio.h>

int main(){

int mayor1=0, mayor2=0, numero=0, menor=0,  cont=1; /*declara variables */

while(cont <=10){
  printf("ingrese un numero entero opcion (%d) de 10 opciones\n",cont);/*ciclo de ingreso de numeros con contador*/
    scanf("%d",&numero);
  if(numero > mayor1){
    mayor2 = mayor1;
    mayor1 = numero;
    }
  else if (numero > mayor2 )
    mayor2 = numero;
    else
     menor= numero;

  cont++;
  }
printf("los dos numeros mas grandes de los ingresados fueron: %d, %d\n",mayor1, mayor2);
printf("%d, %d,%d\n", mayor1, mayor2, numero);
return 0;
}
