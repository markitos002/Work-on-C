 #include <stdio.h>

int main(){

int suma=0,numero,x,y,i,j,k;

for(numero = 2; numero <=100 ; numero+=2 ){
    suma+= numero; //suma el numero a suma
}// fin del for
printf("la suma es: %d\n",suma); //muestra la suma
//otra forma mas abreviada del for
for(suma=0,numero=2;numero <=100;suma+=numero,numero+=2){}
printf("ahora la suma es: %d\n",suma);

//for(x=999; x>=1; x-=2)
 // printf("%d\n",x);

for(y= 19 ;  y<= 51  ; y+= 8  )
   printf("%d\n",y);

for(i=1;i<=5;i++){
   for(j=1;j<=3;j++){
      for(k=1;k<=5;k++){
           printf("*");
           }
          printf("\n");
       }
    printf("\n");
    }
return 0;
}
