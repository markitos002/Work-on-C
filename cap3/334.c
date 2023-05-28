  #include <stdio.h>

int main(){

int x=1,y=1,z=1, a=1, b=1, cuadro; // y=fila, x=columna

printf("este programa imprime una figura cuadrada.\n");
printf("indique la dimension del cuadrado entre 1-20: ");
  scanf("%d",&cuadro);

while(a<=cuadro){
  printf("a");
   a++;}
//while(x<=cuadro){
 //  printf("*");
  //  printf("\n");
 //  x++;
 // }
while(b<=cuadro){
    printf("b");
    printf("\n");
    b++;
  }
while(y<=cuadro){
  printf("z");
   y++;
}
printf("\n");
return 0;
}
