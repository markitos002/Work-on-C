/* programa para ingresar 10 calificaciones, obtener e imprimir el promedio,
ademas se muestra un comentario acerca del resultado */

#include <stdio.h>

int main(){

int cont=1; //variables, calif: representa  el total de lo que se va sumando
float promedio,ingreso,calif;
while(ingreso != -1){ // el contador se controla por centinela, si se ingresa un numero negativo, la instruccion termina
printf("por favor ingrese el (%d) valor de calificacion entre 0-100 (-1) para terminar): ",cont);
 scanf("%f",&ingreso);
 calif = calif+ingreso;
 cont++;// forma abreviada de cont= cont + 1;
 }

promedio = calif / cont; // promedio de las calificaciones

printf("el promedio de calificaciones ingresadas es: %.2f\n",promedio); // comentario
if(promedio <= 50) 
  printf("la nota es muy baja, el promedio es muy bajo!!\n"); // comentario
else if(promedio <=70)
  printf("la nota es regular y aceptable\n"); // comentario
else printf("la nota es buena, es un buen promedio para el curso!!\n");// comentario


return 0;
} // fin de la funcion main
