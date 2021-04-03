 #include <stdio.h>

int main(){

int i,j,l;

for(i=1;i<=10;i++){
   for(j=1;j<=i;j++){
    printf("*");
   }
  printf("\n");
}
for(i=10;i>=1;i--){
   for(j=1;j<=i;j++){
    printf("*");
   }
  printf("\n");
}
for(i=1;i<=10;i++){
     for(j=1;j<=i;j++){
       if(j != i)
        printf(" ");
      else{
        for(l=10;l>=j;l--)
          printf("*");
         }
     }
     printf("\n");
}
for(i=1;i<=10;i++){
      for(j=10;j>=i;j--){
        if(j-i >= 1)
         printf(" ");
        else{
           for(l=1;l<=j;l++)
          printf("*");
          }
       }
       printf("\n");
}
return 0;
}
