#include <stdio.h>   //este programa compra dos numeros

int x,y;

int main(){
   printf("introduzca dos numeros, separelos con un espacio\n");

   scanf("%d%d",&x,&y);

	if (x > y){
		printf("%d es mas grande que %d\n", x,y);
	} //fin del if
	if (x == y){
		printf("%d es igual que %d\n", x,y);
	} //fin del if


return 0;
}
