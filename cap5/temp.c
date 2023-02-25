#include <stdio.h>

int fahren (int c);
int cels   (int f);


int main(){
int ifh,ic,i,j;

printf("Digite hasta donde desea ver la conversion de grados fahrenheit a partir de celsius\n");
printf("El programa mostrara en una tabla los valores de conversion\n");
scanf("%d",&ifh);
printf("Grados Celsius \t  Grados Fahrenheit\n");

for (i=0;i<=ifh; i++){
   printf("\t%d \t \t \t %d\n",i,fahren(i));
    }
printf("Digite hasta donde desea ver la conversion de grados Centigrados a partir de Fahrenheit\n");
printf("El programa mostrara en una tabla los valores de conversion\n");
scanf("%d",&ic);
printf("Grados Fahrenheit \t Grados Centigrados\n");
for (j=32; j<=ic; j++){
   printf("\t%d \t \t \t %d\n",j,cels(j));
   }

return 0;
}
int fahren (int c){

int gradosF;

gradosF =(c * 9 / 5) + 32;

return gradosF;

}// fin de la funcion fahren

int cels (int f){
int gradosC;

gradosC = (f - 32) * 5 / 9;

return gradosC;

}// fin de la funcion cels
