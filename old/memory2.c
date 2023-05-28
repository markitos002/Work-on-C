#include <stdio.h>

int main(){
int a,b;

printf("introduzca dos enteros y se indicara la relacion que satisfacen\n");

scanf("%d%d", &a , &b);

if (a == b){
printf( "%d es igual que %d\n", a ,b);
}

if (a != b){
printf("%d es diferente de %d\n", a ,b);
}

if (a > b){
printf("%d es mayor que %d\n", a, b);
}

if (a < b){
printf("%d es menor que %d\n", a, b);
}

return 0;
}
