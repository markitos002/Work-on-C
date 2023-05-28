#include <stdio.h>
#include <math.h>

float redonEnt(float a);
float redonDec(float b);
float redonCent(float c);
float redonMil(float d);

int main(){
float num;

do{
printf("Ingrese el numero que desea redondear, ingrese -1 para terminar: \n");
scanf("%f",&num);

printf("El valor del numero original es: %.2f\n", num);
printf("El valor del numero redondeado al entero es: %.2f\n",redonEnt(num));
printf("El valor del numero redondeado a las decimas es: %.2f\n",redonDec(num));
printf("El valor del numero redondeado a las centecimas es: %.2f\n",redonCent(num));
printf("El valor del numero redondeado a las Milesimas es: %.2f\n",redonMil(num));
}
while( num != -1);

return 0;
}// fin de la funcion main
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
float redonEnt(float a){
float y;
y = floor(a + 0.5);
return y;
}// fin de la funcion redonEnt
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
float redonDec(float b){
float z;
z = floor(b * 10 + 0.5)/10;
return z;
}// fin de la funcion redonDec
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
float redonCent(float c){
float w;
w = floor(c * 10 + 0.5)/100;
return w;
}//fin de la funcion redonDec
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
float redonMil(float d){
float j;
j = floor(d * 10 + 0.5)/ 1000;
return j;
}//fin de la funcion redonMil
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
