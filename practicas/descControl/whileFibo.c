/************************************************
* Nombre:Fibonacci series with while            * 
*                                               *
*                                               *
* Proposito:to create fibonacci series with whil*
*                                               *
*                                               *
* Uso:print fibonacc until 100 using while      *
*                                               *
************************************************/

#include <stdio.h>
int old_number;
int current_number;
int next_number;

int main(){
/***initialize the variables ***/
old_number =1;
current_number=1;
printf("1\n"); /*print the first number*/

while(current_number < 100){

	printf("%d\n",current_number); /*** clear adaptation of Fn= Fn-1 + Fn-2***/
	next_number= current_number + old_number;

	old_number= current_number;
	current_number= next_number;
	}


return 0;
}
