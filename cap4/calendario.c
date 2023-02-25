#include <stdio.h>

int main(){

int a=0,b=0,i=1,j=1,c=31,s=1,k=1,l=1;
printf("Genera calendario a partir de cualquier anio\n");
printf("Por favor ingrese el anio: \n");
scanf("%d",&a);

if ((a%4 == 0) &&  (a%100 != 0) || (a%400 == 0)){
  a=366;
  printf("\n>>> Anio Bisiesto <<<\n\n");}
else
  a=365;

printf("\tEnero");

for(i=1;i<=12;i++){
   printf("\n");
   for(j=1;j<=c;j++){
     if(i == 2 && a == 365){
       c=28;
       }
     else if (i == 2 && a == 366){
          c=29;
              }
          else{
               k=i;
              for(k=1;k<=12;k++){
                 if(i%2 == 0 && !(i==8) && !(i == 10) && !(i == 12) || (i == 9) || (i == 11))
                 c=30;
                 else 
                 c=31;
                  }
             }
    if(j % 8 == 0){
         printf("\n");
        }
     printf("%d ",j);

     }
switch(i){
   case 1: printf("\n\n\tFebrero");break;
   case 2: printf("\n\n\tMarzo");break;
   case 3: printf("\n\n\tAbril");break;
   case 4: printf("\n\n\tMayo");break;
   case 5: printf("\n\n\tJunio");break;
   case 6: printf("\n\n\tJulio");break;
   case 7: printf("\n\n\tAgosto");break;
   case 8: printf("\n\n\tSeptiembre");break;
   case 9: printf("\n\n\tOctubre");break;
   case 10: printf("\n\n\tNoviembre");break;
   case 11: printf("\n\n\tDiciembre");break;
   case 12: printf("\n");break;
      }
   }
printf("\n");
return 0;
}
