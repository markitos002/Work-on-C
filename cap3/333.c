 #include <stdio.h>

int main(){

int x=1,y=1,cuadro; // y=fila, x=columna

printf("este programa imprime una figura cuadrada.\n");
printf("indique la dimension del cuadrado entre 1-20: ");
  scanf("%d",&cuadro);

while(x<=cuadro){ //mientras esta condicion se cumpla se repite el bucle completo
   y=10;   // domina el bucle de filas
     while(y<=cuadro){ //bucle de filas
      printf("x");
     y--;//incrementa para que el bucle de filas sea falso en algun momento
    }
x++;// incrementa para que el bucle completo (columnas) se haga falso en algun momento
printf("\n");//salto de linea que simula la formacion de un cuadrado
}


return 0;
}
