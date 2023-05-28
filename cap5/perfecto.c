#include <stdio.h>

void perfecto(int numero);

int main(){
int n,j;
printf("Escriba un numero para determinar si es un mumero perfecto: \n");
printf("recurede que un numero perfecto es aquel que la suma de sus factores es igual al numero\n");
printf("por ejemplo: 6 = 1+2+3\n");
scanf("%d",&n);

for(j=1;j<n;j++){
perfecto(j);
}

return 0;
}
void perfecto(int numero){
int res,i,suma=0,perf;
for(i=1;i<=(numero-1);i++){
   res= numero % i;
   if(res == 0){
     suma+=i;
        }
      }
if (suma == numero){
  perf = suma;
 printf("%d\n",perf);
   }
}// fin de la funcion perfecto
