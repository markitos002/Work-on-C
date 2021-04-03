 #include <stdio.h>

int main(){
int  y=1, x=1, barra;
printf("ingrese el tamano y espacio de la barras:"); scanf("%d", &barra);

while( y <= barra){
     x=1;
    if(y==1 || y== barra)
     {
      while (x <= barra)
       {
        printf("%s", "*");
        x++;
       }
     }
    else
     {
     while(x <= barra)
       {
       if(x == 1 || x == barra)
         {
         printf("%s", "*");
         x++;
         }
        else
         {
         printf("%s", " ");
         x++;
         }
       }
      }
printf("\n");
y++;
   }
printf("\n");
return 0;
}
