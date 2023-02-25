 #include <stdio.h>

int main(){

int x,y=1,z,a=1,b=1;

printf("introduzca la cantidad de valores que va a comparar: \n");
  scanf("%d",&y);

 for(x=1; x<=y; x++){
    printf("introduzca el numero: \n");
    scanf("%d",&z);
      if (z>=b){
        b=z;
      }
      else{
        a=z;
      }
  }
printf("el menor de los numeros introducidos fue: %d\n",a);

return 0;
}
