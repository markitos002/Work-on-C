#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void resultado (void);

int main(){

resultado ();

return 0;
}
	
	
void resultado(void){

int i,n,a=0,b=0;

srand(time (NULL)); // toma como base la semilla como generador de numero aleatorio

for(i=1;i<=100;i++){
  n = 1+(rand()%2);
 // printf("%10d", n); // imprime numero aleatorio entre 1 y 2 
   //   printf("\n");
   
if(n == 1){
   a++;
   printf("cara\n");
  }
else{
   b++;	
   printf("cruz\n");
   }
  }//fin del for
printf("la cantidad de caras fue: %d\n",a);
printf("la cantidad de cruces fue: %d\n",b);
printf("total de lanzamientos: %d\n",a+b);

}
