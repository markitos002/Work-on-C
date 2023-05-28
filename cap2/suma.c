#include <stdio.h>

int main(){
	int    x, y,z,a,suma=0;
	printf("introduzca dos numeros separados de un espacio\n");
	scanf( "%d%d%d%d" ,&x, &y, &z, &a);

	suma = x * y * y + z * y + a;
	printf("la suma es igual a %d\n", suma);



return 0;
}
