#include <stdio.h>

int main(){
	int    x, y ;
	printf("introduzca dos numeros separados de un espacio\n");
	printf("se mostraran las relaciones entre los numeros\n");

	scanf( "%d%d" ,&x, &y);

	if( x == y){
	printf("los numero son iguales\n");
	}
	if(x != y){
	printf("%d es diferente de %d\n", x,y);
	}
	if(x > y){
	printf("%d es mayor que %d\n", x,y);
	}
	if(x < y){
	printf("%d es menor que %d\n", x, y);
	}


return 0;
} //fin de la funcion main
