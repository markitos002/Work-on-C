#include <stdio.h>

int potencia (int base, int exp);

int main(){
int a,b;

printf("Este programa calcula potencia de acuerdo a la base y el exponente ingresado\n");
printf("Ingrese la base y el exponente separados por un espacio: \n");
scanf("%d%d",&a,&b);

printf("la potencia de la base-exponente es: %d\n",potencia(a,b));



return 0;
}
int potencia (int base, int exp){

if (exp == 1){
    return base;}
else{
   return base * potencia(base,exp - 1);}

}
