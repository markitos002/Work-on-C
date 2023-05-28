#include <stdio.h>

int main(){
//el programa agrupa y suma diferentes tipos de calificaciones
int total;
int calificacion;
int cuentaA = 0;
int cuentaB =0;
int cuentaC =0;
int cuentaD =0;
int cuentaE =0;

printf("Introduzca la letra que corresponde a la califiacion; \n");
printf("introduzca el caracter EOF(Ctrl + d) para salir del programa y obtener el resumen.\n");

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
//imprime resultados
printf("estos son los totales de las calificaciones: \n");
printf("A: %d\n",cuentaA);
printf("B: %d\n",cuentaB);
printf("C: %d\n",cuentaC);
printf("D: %d\n",cuentaD);
printf("E: %d\n",cuentaE);
printf("Total: %d\n",cuentaA+cuentaB+cuentaC+cuentaD+cuentaE);

total = ((cuentaA*5)+(cuentaB*4)+(cuentaC*3)+(cuentaD*2)+(cuentaE*1))/5;
printf("el promedio de calificaciones es: %d\n", total);
if (total <= cuentaA && cuentaA >= cuentaB)
  printf("el promedio cualitativo fue A.\n");
  else if(total <= cuentaB && cuentaB >= cuentaC)
    printf("el promedio cualitativo fue B.\n");
    else if(total <= cuentaC && cuentaC >= cuentaD)
     printf("el promedio cualitativo fue C.\n");
      else if(total <= cuentaD && cuentaD >=cuentaE)
        printf("el promedio cualitativo fue D.\n");
          else if(total <= cuentaE || cuentaE >= 10)
              printf("el promedio cualitativo fue E.\n");
                else
                 printf("promedios regulares!!!\n");
//recordar que la combinacion EOF para ubuntu es <ctrl + d>
return 0;
}
