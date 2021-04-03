#include <stdio.h>

int main(){
int i,j,x,y;

printf("introduzca la entrada de datos, separe con un espacio: \n");
  scanf("%d%d", &x,&y);

for(i=1;i<=x;i++){
   for(j=1;j<=y;j++){
      printf("@");
   }// fin for interno
   printf("\n");
}//fin del for externo

return 0;
}
