/*******************************************************************************************************************
Nombre: multiplication table 

Proposito: ask the user for the multiplication table to process

Uso: input the multiplication table requested by the user 
********************************************************************************************************************/

#include <stdio.h>
int table1;
int table2;
int result;
char line[50];


int main(){

while(1){

printf("What table you want to print? press 0 to get out: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &table2);

	if(table2 == 0)
		break;

	for(table1 = 0; table1 <21 ; ++table1){
		printf("\t %d\t X\t %d \t =\t %d\n", table1, table2, result=(table1 * table2)); 
	}

}



return 0;
}
