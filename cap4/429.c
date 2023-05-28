// las leyes de morgan establecen que !(cond1 && cond2) es equivalente a !(cond1) || !(cond2)
// demostracion:

#include <stdio.h>

int main(){

int a=6,b=6,c=2,d=3,e=6,f=10,g=5,i=2,j=10;

printf("%d\n", !(a < 5) && !(b > 7));
//ley morgan
printf("%d\n", !(a <5 || b > 7));

printf("%d\n", !(c==d) || !(e !=5));
//ley de morgan
printf("%d\n", !(c==d && e != 5 ));

printf("%d\n", !((f <= 8) && !(g > 4)));
//ley de morgan
printf("%d\n", !(f <= 8) || !(!(g > 4)));

printf("%d\n", !((i > 4) || (j <= 6)));
// ley de morgan
printf("%d\n", !(i > 4) && !(j <= 6));

return 0;
}
