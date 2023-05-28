/************************************************
* Nombre: understand initiation of variables    * 
*                                               *
*                                               *
* Proposito: to initiate variables              *
*                                               *
*                                               *
* Uso: imprime los valores iniciados en las va  *
*  variables                                    *
*                                               *
************************************************/

int counter = 0;
int product_codes [4] = {10,972,45};

/*** in fact, if we don´t give to C the dimension of the array, C will determine that dimension according to the number of elements in the array, for example ***/
int product_codes2 [] = {34,56,76,87};
/***for a two dimension array let's see as follows ***/
int matrix [2][4]=
        {
		{12,34,56,76},
		{56,57,98,23}
	};


#include <stdio.h>

int main(){

printf( "the value is %d\n", counter);
printf( "the value is %d\n", product_codes[0]);
printf( "the value is %d\n", product_codes[1]);
printf( "the value is %d\n", product_codes[2]);
printf( "the value is %d\n", product_codes[3]);/***if there is a lack of value in the array, C initiate the lacking value with 0 ***/

printf("the value is %d\n", product_codes2[0]);
printf("the value is %d\n", product_codes2[1]);
printf("the value is %d\n", product_codes2[2]);
printf("the value is %d\n", product_codes2[3]);

printf("the values of matrix is %d\n", matrix[0][0]);
printf("the values of matrix is %d\n", matrix[0][1]);
printf("the values of matrix is %d\n", matrix[0][2]);
printf("the values of matrix is %d\n", matrix[0][3]);
printf("the values of matrix is %d\n", matrix[1][0]);
printf("the values of matrix is %d\n", matrix[1][1]);
printf("the values of matrix is %d\n", matrix[1][2]);
printf("the values of matrix is %d\n", matrix[1][3]);

return 0;
}
