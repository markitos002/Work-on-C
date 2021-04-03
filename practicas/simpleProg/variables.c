/*******************************************************************************************************************
Nombre:get to know global and temporary variables		 

Proposito:run a piece of code to find out how it works global and temporary variables	

Uso: by using a for statement find out global and temporary variables working 
********************************************************************************************************************/

#include <stdio.h>

int main(){
	int counter; //loop counter
	for (counter = 0; counter < 5; ++counter){
		auto int temporary = 1;  // a temporary variable
		static int permanent = 1; // a permanent variable

		printf (" Temporary %d   Permanent %d\n", temporary, permanent);

		++temporary;
		++permanent;
	}


return 0;
}
