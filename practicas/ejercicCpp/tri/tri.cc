#include <iostream.h>

main() 
{
    // function to compute area of triangle 
    float triangle(float width, float height);   

    cout << "Triangle #1 " << triangle(1.3, 8.3) << '\n';
    cout << "Triangle #2 " << triangle(4.8, 9.8) << '\n';
    cout << "Triangle #3 " << triangle(1.2, 2.0) << '\n';
    return (0);
}
/*******************************************
 * triangle -- compute area of a triangle  *
 *                                         *
 * Parameters                              *
 *  width -- width of the triangle         *
 *  height -- height of the triangle       *
 *                                         *
 * Returns                                 *
 *  area of the triangle                   *
 *******************************************/
float triangle(float width, float height)
{
    float area; // area of the triangle 

    area = width * height / 2.0;
    return (area);
}
