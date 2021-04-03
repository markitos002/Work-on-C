#include <stdio.h>
int mcd (int x, int y);

int main(){

int a,b;	

printf("ingrese dos numero para determinar MCD (maximo comun divisor): \n");
scanf("%d%d",&a,&b);

printf("el MCD de los dos numero es: %d\n", mcd(a,b));


return 0;
}
int mcd (int x, int y){

int i,z,w;

for(i=2;i<=x;i++){
if(x%i == 0){
  z= x/i;
  printf("%d \t %d\n",z,i);
   }
}
printf("\n");

for(i=2;i<=y;i++){
if(y%i == 0){
 w = y/i;
  printf("%d \t %d\n",w,i);
   }
}
printf("\n");

}//fin de la funcion mcd
