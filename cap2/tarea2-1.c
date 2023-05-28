
#include <stdio.h>

int x,y,z,suma=0,producto=0,promedio=0,min,max;

int main(){

 printf("introduzca tres numeros separados por un espacio:\n");
 scanf("%d%d%d",  &x,&y,&z);
  suma=x+y+z;
  producto=x*y*z;
  promedio=(x+y+z)/3;

   printf("la suma de los numeros es %d\n", suma);
   printf("el producto de los numeros es %d\n", producto);
   printf("el promedio de  los numeros es %d\n",promedio);

max=x;
if(y>max){
max=y;
  }
  if(z>max){
    max=z;
    }
min=x;
if (y<min){
  min=y;
   }
   if(z<min){
    min=z;
    }

printf("el numero mas pequeno es %d\n",min);
printf("el numero mas grande es %d\n",max);

if (min == max){
 	printf("como ves los numeros son todos iguales.\n");
	}
return 0;
}
