/*-*/
/********************************************************
 * Question: Perimeter  				*
 * Purpose: print the perimeter of a rectangle 		*
 * Use: Enter the data and return  the rectangle perimt *
 ******************************************************/
/*+*/
#include <stdio.h>
char line[100];/* line of input data */
int  height;   /* the height of the rectangle*/
int  width;    /* the width of the rectangle */
int  perimeter;     /* perimeter of the regtangle */

int main()
{
    printf("Enter both width and height: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);

    perimeter = 2 * (width + height);/***formula to obtain the perimeter ***/

    printf("The perimeter is %d\n", perimeter);

    return (0);
}
