#include <stdio.h>

int main(){
//el programa agrupa y suma diferentes tipos de calificaciones

int calificacion;
int cuentaA = 0;
int cuentaB =0;
int cuentaC =0;
int cuentaD =0;
int cuentaE =0;

printf("Introduzca la letra que corresponde a la califiacion; \n");
printf("introduzca el caracter EOF(Ctrl + d) para salir del programa y obtener el resumen.\n");

do{

calificacion = getchar();

//printf("la calificacion es: %c\n",calificacion);

if ((calificacion == 'a') || calificacion == 'A')
   cuentaA++;
  else if ((calificacion == 'b') || (calificacion == 'B'))
    cuentaB++;
      else if ((calificacion == 'c') || (calificacion == 'C'))
        cuentaC++;
          else if((calificacion == 'd') || (calificacion == 'D'))
            cuentaD++;
             else if((calificacion == 'e') || (calificacion == 'E'))
              cuentaE++;

    }while( calificacion != EOF);






/*

while((calificacion = getchar()) != EOF){

    switch (calificacion){
	case 'A':
	case 'a': //calificacion
	++cuentaA;
	break;

	case 'B':
	case 'b':
	++cuentaB;
	break;

	case 'C':
	case 'c':
	++cuentaC;
	break;

	case 'D':
	case 'd':
	++cuentaD;
	break;

	case 'E':
	case 'e':
	++cuentaE;
	break;

	case'\n': //ignora nueva lineas
	case'\t': //ignora tabulaciones
	case' ': //ignora espacios en blanco
	break;

	default: //atrapa todos los caracteres
	printf("introdujo una letra incorrecta.");
	printf("introduzca una nueva calificacion.\n");
	break;//opcional de todos modos se sale del switch

    }// fin del swuitch
}//fin del while
*/

//imprime resultados
printf("estos son los totales de las calificaciones: \n");
printf("A: %d\n",cuentaA);
printf("B: %d\n",cuentaB);
printf("C: %d\n",cuentaC);
printf("D: %d\n",cuentaD);
printf("E: %d\n",cuentaE);
printf("Total: %d\n",cuentaA+cuentaB+cuentaC+cuentaD+cuentaE);
//recordar que la combinacion EOF para ubuntu es <ctrl + d>
return 0;
}
