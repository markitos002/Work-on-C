/************************************************
* Nombre:learn to use break control             * 
*                                               *
*                                               *
* Proposito:include break to control prgm flow  *
*                                               *
*                                               *
* Uso:input data to control the program flow    *
*                                               *
************************************************/
char line[100]; /*line to input data*/
int total; /*running total of all numbers so far*/
int item;  /*next item to add to the list */

#include <stdio.h>

int main(){

	total=0;
	while(1){
		printf("enter # to add \n");
		printf("   or 0 to stop:");

		fgets(line,sizeof(line),stdin);
		sscanf(line, "%d" , &item);

		if (item == 0)	
		break;

		total+= item;
		printf("total: %d\n",total);
		}
	printf("final total: %d\n",total);

return 0;
}
