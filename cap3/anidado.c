// el programa lee el resultado y determina la cantidad de aciertos (1) o fallos (2), mas de 8 aciertos, nota valida.
#include <stdio.h>

int main(){

int cont1=1, cont2=0,cont3=0, resultado, nota; 



while(cont1 <=10){
  printf("por favor ingrese los  10 resultados (1) aprobado o (2) reprobado >> %d:  ",cont1);
  scanf("%d",&nota);
    if(nota == 1)
      cont2++; // forma abreviada de cont2 = cont2 + 1;
    else
      cont3++; // forma abreviada de cont3 = cont3 + 1;
  cont1++; // forma abreviada
  }
  resultado = cont2;
  printf("Aprobados: %d\n",cont2);
  printf("Reprobados: %d\n",cont3);
if (resultado >= 8)
  printf("el resultado de aprobados fue: %d, se logro el objetivo!!! \n\n", cont2);
else
  printf("el resultado de reprobados fue: %d, se requeria que solo fueran 2 no se logro el objetivo!!! \n\n", cont3);

return 0;
}
