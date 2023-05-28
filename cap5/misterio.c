#include <stdio.h>

int misterio (int a, int b);
int main(){

int x,y;
printf("introduzca dos enteros, el segundo que sea entero positivo\n");
scanf("%d%d",&x,&y);

printf("El resultado es %d\n", misterio(x,y));

return 0;
}
int misterio(int a, int b){
if(b==1){
	return a;}
else{
	return a + misterio(a,b-1);}

}// fin de la funcion misterio
