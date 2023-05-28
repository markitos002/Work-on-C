#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Estatus {CONTINUA, GANA, PIERDE}; // constantes de enumeracion que representan el estado del juego

int tiraDados (void); // prototipo de la funcion

int main(){
int suma, miPunto; // suma de los puntos// punto ganado

enum Estatus estatusJuego; // puede contener cualquiera de los estados

srand(time (NULL));
suma = tiraDados(); //primer tiro de dados

switch (suma){

case 7:
case 11:
     estatusJuego = GANA;break;  // gana en el primer tiro

case 2:
case 3:
case 12:
     estatusJuego = PIERDE;break;// pierde en el primer tiro

default:
  estatusJuego = CONTINUA;
  miPunto = suma;
  printf("Su punto es: %d\n", miPunto);
  break;
  }// fin del switch

//mientras el juego no se complete
while(estatusJuego == CONTINUA){
  suma = tiraDados();//tira de nuevo los dados

//determina el estado del juego

  if(suma == miPunto){ //gana por puntos
    estatusJuego = GANA;// fin del juego jugador gana
    }
  else{
      if(suma == 7){
    estatusJuego = PIERDE; // fin del juego jugador pierde
    }//fin del if
   }//fin del else
  }// fin del while
//imprime mensaje de triunfo o derrota
if(estatusJuego == GANA){
   printf("\nEl jugador Gana :-)\n\n");
   }
else{
   printf("\nEl jugador Pierde :-(\n\n");
   }
return 0;
} // fin de la funcion main

// tiro de dados, calcula la suma y despliega resultados

int tiraDados(void){

int dado1,dado2,sumaTemp; // variable de los dados y suma de los dados

dado1 = 1 + (rand() % 6);
dado2 = 1 + (rand() % 6);
sumaTemp = dado1 + dado2;

//despliega resultados del tiro

printf("\nEl jugador tiro %d + %d = %d\n", dado1,dado2,sumaTemp);

return sumaTemp; // devuleve la suma de los dados
} // fin de la funcion tiraDados
