
#include <stdio.h>

int main(){
int num,y=1,x=1,z,a;

printf("ingrese el numero para generar el factorial: ");
  scanf("%d", &num);

while(y <= num){
   z=x*y;
   x=z;
   y++;
  printf("%d\n",z);
  }
a=z;
printf("el factorial del numero es: %d\n",a);
return 0;
}
