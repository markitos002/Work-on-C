#include <stdio.h>
#include <stdlib.h>
int main(){

int frec1 = 0;
int frec2 = 0;
int frec3 = 0;
int frec4 = 0;
int frec5 = 0;
int frec6 = 0; // contadores de cada tiro
int tiro;  // cuenta los tiros hasta 6000
int cara;  // tiro del lado, es decir valores entre 1 a 6

for(tiro=1; tiro <=6000; tiro++){
   cara = 1 + (rand() % 6);// numero aleatorio entre 1 y 6

   switch(cara){
	case 1: ++frec1;break;
	case 2: ++frec2;break;
	case 3: ++frec3;break;
	case 4: ++frec4;break;
	case 5: ++frec5;break;
	case 6: ++frec6;break;
   }// fin del switch
}// fin del for
printf("%s%13s\n", "Cara","Frecuencia");
printf("    1%13d\n",frec1);
printf("    2%13d\n",frec2);
printf("    3%13d\n",frec3);
printf("    4%13d\n",frec4);
printf("    5%13d\n",frec5);
printf("    6%13d\n",frec6);

return 0;
}
