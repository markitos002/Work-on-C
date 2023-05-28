/* programa para ingresar 10 calificaciones, obtener e imprimir el promedio,
ademas se muestra un comentario acerca del resultado */

#include <stdio.h>

int main(){

int promedio,ingreso, calif=0, cont=1; //variables, calif: representa  el total de lo que se va sumando

while(cont <=10){ // el contador controla instruccion while para que sea falsa en algun momento
printf("por favor ingrese el (%d) valor de calificacion entre 0-100: ",cont);
 scanf("%d",&ingreso);
 calif = calif+ingreso;
 cont++;// forma abreviada de cont= cont + 1;
 }

promedio = calif / 10; // promedio de las calificaciones

printf("el promedio de calificaciones ingresadas es: %d\n",promedio); // comentario
if(promedio <= 50) 
  printf("la nota es muy baja, el promedio es muy bajo!!\n"); // comentario
else if(promedio <=70)
  printf("la nota es regular y aceptable\n"); // comentario
else printf("la nota es buena, es un buen promedio para el curso!!\n");// comentario


return 0;
} // fin de la funcion main
