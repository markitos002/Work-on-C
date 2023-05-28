#include <stdio.h>

int main(){

int gerente=0,empleado=0,destaj=0,sem=0,vlrsem=0,horasplen=0,vlrhora=0,elem=0,vlrelem=0, cont1,cont2,cont3,cont4;
float extras=0,emple=0, comi=0,brutas=0;
printf("Este programa calcula el salario de acuerdo el tipo de empleado.\n");

  printf("introduzca el codigo de empleado para iniciar y despues de obtener el valor del salario: \n");
  printf(" 1 para Gerente\n");
  printf(" 2 para Empleado\n");
  printf(" 3 para Comisionista\n");
  printf(" 4 para Destajo\n");
printf("Para terminar Ctrl + d\n");

while((empleado = getchar()) != EOF){
   cont1=0;
   cont2=0;
   cont3=0;
   cont4=0;
 switch(empleado){

   case '1':
    printf("Ingrese el numero de semanas laboradas:\n");
     scanf("%d",&sem);
    printf("Ingrese el valor a pagar por semana contratada: $ \n");
     scanf("%d",&vlrsem);
      cont1++;
    break;

   case '2':
    printf("Ingrese el numero de horas plenas trabajadas en la semana:\n");
     scanf("%d",&horasplen);
    printf("Ingrese el numero de horas extras trabajadas en la semana:\n");
     scanf("%f",&extras);
    printf("ingrese el valor de la hora contratada: $ \n");
     scanf("%d",&vlrhora);
     cont2++;
    break;

    case '3':
     printf("Ingrese el valor de ventas brutas realizadas en la semana: $\n");
      scanf("%f",&brutas);
      cont3++;
     break;

    case '4':
     printf("Ingrese la cantidad de elementos producidos en la semana: \n");
      scanf("%d",&elem);
     printf("Ingrese el valor que se debe pagar por elemento: $ \n");
      scanf("%d", &vlrelem);
      cont4++;
     break;
   case ' ' :
   case '\n':
   case '\t':
  break;

  default:
   printf("valor ingresado invalido. ");
   printf("ingrese un nuevo valor. \n");
   break;
  }//fin del switch

  gerente= sem *vlrsem;
  emple= vlrhora * (horasplen+(extras*1.5));
  comi= 250 + ((brutas*5.7)/100);
  destaj = elem*vlrelem;

  if(cont1 > 0){
   printf("el valor del salario de Gerente es: %d\n", gerente );
    printf("por favor ingrese un nuevo codigo de empleado: \n\n");}
    if(cont2 > 0){
      printf("El valor del salario de empleado es: %.2f \n", emple);
      printf("por favor ingrese un nuevo codigo de empleado: \n\n");}
        if(cont3 > 0){
        printf("El valor del salario mas comisiones es de: %.2f\n", comi );
        printf("por favor ingrese un nuevo codigo de empleado: \n\n");}
          if(cont4 >0){
               printf("El valor del salario por destajo es de: %d\n", destaj);
               printf("por favor ingrese un nuevo codigo de empleado: \n\n");}
   }//fin del while

return 0;
}
