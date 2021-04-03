#include <stdio.h>

int main(){

int i,j,k;

for(i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      k=j;
       if( j == 5 || i == 5 )
        printf("*");
       else if( (j == 4 || j == 6) && !(i == 1) && !(i == 9))
        printf("*");
       else if ( (j == 3 || j == 7) && !(i < 3)  && !( i > 7))
        printf("*");
       else if ((j == 2 || j == 8)  && !(i < 4)  && !(i > 6))
        printf("*");
        else
        printf(" ");
    }
printf("\n");
}
return 0;

}
