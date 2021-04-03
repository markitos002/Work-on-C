/************************************************
* Nombre:learn to use break control and continue* 
*                                               *
*                                               *
* Proposito:include contnue to control prgm flow*
*                                               *
*                                               *
* Uso:input data to control the program flow    *
*     by using break and continue               *
************************************************/
char line[100]; /*line to input data*/
int total; /*running total of all numbers so far*/
int item;  /*next item to add to the list */
int minus_item; /*number of negative items*/

#include <stdio.h>

int main(){

	total=0;
	minus_item=0;

	while(1){
		printf("enter # to add \n");
		printf("   or 0 to stop:");

		fgets(line,sizeof(line),stdin);
		sscanf(line, "%d" , &item);

		if (item == 0)	
		break;

		if (item < 0){
			++minus_item;
			continue;
		}
		
		total+= item;
		printf("total: %d\n",total);
		}
	printf("final total: %d\n",total);
	printf("with %d  negative items omitted\n", minus_item);
	
return 0;
}
