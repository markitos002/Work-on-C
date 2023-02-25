/************************************************
* Nombre: lee un string y otras funciones       * 
*                                               *
* Proposito: aprender a ingresar una string y   *
* y gestionar su uso                            *
*                                               *
* Uso: ingresar una string desde el teclado y   *
*      obtiene datos                            *
************************************************/

#include <string.h>
#include <stdio.h>

char line[100]; /***linea que estamos buscando ***/
		/*** uso de fgets: fgets(nombre, sizeof(name),stdin)***/
                /***  nombre: nombre de la variable, sizeof: max numero de caracteres a leer, stdin: archivo a leer***/
                 /*** para el caso del ejemplo stdin es la entrada de teclado ***/
char nombre[50];
char apellido[50];
char completo[100];

int main(){
	printf("ingrese una cadena (linea:)");
	fgets(line, sizeof(line),stdin);

	printf("la longitud de la cadena es %d\n",strlen(line));
/*** ahora se solicitara al usuario que ingrese su nombre y apellido y se imprimira en pantalla, variables ya declaradas **/
	printf("ingrese su nombre: ");
	fgets(nombre,sizeof(nombre),stdin);

	printf("ingrese su apellido: ");
	fgets(apellido,sizeof(apellido),stdin);

	strcpy(completo, nombre);
	strcat(completo, " ");
	strcat(completo, apellido);

	printf("el nombre completo es: %s\n",completo);

/*** como el caso anterior c adiciona -end of file- por defecto, con la siguiente rutina la eliminamos ***/
	
	printf("ingrese su nombre: ");
	fgets(nombre,sizeof(nombre),stdin);
	nombre[strlen(nombre)-1] = '\0';  /***quita el ultimo caracter, es decir -end of file- \0 ***/

	
	printf("ingrese su apellido: ");
	fgets(apellido,sizeof(apellido),stdin);
	apellido[strlen(apellido)-1] = '\0';  /***quita el ultimo caracter, es decir -end of file- \0 ***/
	
	strcpy(completo, nombre);
	strcat(completo, " ");
	strcat(completo, apellido);

	printf("el nombre completo es: %s\n",completo);

return 0;
}
