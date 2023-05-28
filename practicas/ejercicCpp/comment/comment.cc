#include <iostream.h>

int  height;   /* the height of the triangle
int  width;    /* the width of the triangle */
int  area;     /* area of the triangle (computed) */

main()
{
    cout << "Enter width height? ";
    cin >> width >> height;
    area = (width * height) / 2;
    cout << "The area is " << area << '\n';
    return (0);
}
