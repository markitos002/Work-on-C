/************************************************
* Nombre:make a conversion from kilomet to miles* 
*                                               *
*                                               *
* Proposito:to make a conversion from input data*
*                                               *
*                                               *
* Uso:input kilometers and return miles         *
*                                               *
************************************************/

char line[100]; /*input line*/
float kilometer;
float mile;
const float MILE=0.6213712; /*constant for mile*/

#include <stdio.h>

int main(){

printf("Please enter kilometers to convert: ");
fgets(line,sizeof(line),stdin);
sscanf(line, "%f", &kilometer); /* conversion char to float and store in kilometer variable*/

mile= kilometer * MILE;


printf("the conversion to miles is: %.2f\n",mile);

return 0;
}
