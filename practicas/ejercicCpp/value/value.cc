#include <iostream.h>
// This function won't work
void inc_counter(int counter)
{
    ++counter;
}

main()
{
   int a_count = 0;	// Random counter

   inc_counter(a_count);
   cout << a_count << '\n';
   return (0);
}
