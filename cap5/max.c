#include <stdio.h>

int maximo(int x, int y, int z); // function maximo prototype

int main(){

int num1,num2,num3; //  variables declared

printf("\nPlease enter 3 numbers, put an space between eacn one\n");
printf("this program will show the higher number.\n\n");
  scanf("%d%d%d", &num1,&num2,&num3);

printf("\nThe higher number of the entered ones was: %d\n\n", maximo(num1,num2,num3)); // call the function maximo print it.

return 0;
}// end of the main function.
// maxim function definition
int maximo(int x, int y, int z){

   int max = x; //it declares max function and puts x as value
if( y > max){
  max = y;
}
   if( z > max){
    max = z;
   }
return max; // return the max value, it is the output of the function

}// end of the maximo function.
