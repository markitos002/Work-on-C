/************************************************
* Nombre: uso de los strings en C              *
*                                               *
*                                               *
* Proposito: comprender como c maneja los strng *
*                                               *
*                                               *
* Uso: Imprir stings en c mediante la func print*
*                                               *
************************************************/

#include <stdio.h> /*** biblioteca para el entradas y salidas, para el caso permite el ingreso de caracteres ***/
#include <string.h> /*** biblioteca para el manejo de cadenas, para el caso permite copias cadenas completas ***/


char name[4]; /*** declara el array name para reservar 4 espacios de memoria para los carateres ***/
char name_1[10]; /*** declara el array para reservar 10 espacios de memoria para el string ***/
char complete[20];
char line[100];

int main(){

name[0]='s';
name[1]='a';
name[2]='m';
name[3]='\0';

printf("el nombre es %s\n", name); /*** imprime el array name que contiene 4 caracteres ***/

strcpy(name_1, "markitos");
printf("el nombre es %s\n", name_1); /*** imprime el array anme_1 que contiene el string markitos ***/

strcpy(complete, name); /*** copia la primera cadena a la variable complete ***/
strcat(complete, " "); /*** concatena un espacio ***/
strcat(complete, name_1); /*** concatena la ultima parte de la cadena ***/

printf("el nombre completo es %s\n", complete);
/*** ingresar texto desde un archivo o desde el teclado ***/

printf("ingrese su nombre completo\n");
fgets(line,sizeof(line),stdin);

printf("la longitud de su nombre es de %d\n", strlen(line));




return 0;
}
