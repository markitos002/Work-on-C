/*******************************************************************************************************************
Nombre: triangle area, using function 

Proposito: calculate the triangle area using function

Uso: input parameters to the function to print the result
********************************************************************************************************************/
float triangle (float width, float height); /* prototype of triangle function, for sake of clarity include variable names, however it is not necesary */

#include <stdio.h>
/* Function: triangle: compute area of the triangle
   Parameters: width -- width of the triangle
   		height -- heith of the triangle


   Returns: area of the triangle.
*/
float triangle( float width, float height){
	float area;
	
	area = width * height / 2.0;
	return (area);

	}

int main(){


printf( "Triangle #1 %f\n", triangle(1.3, 8.3));
printf( "Triangle #2 %f\n", triangle(4.8, 9.8));
printf( "Triangle #3 %f\n", triangle(1.2, 2.0));

return 0;
}
