#include <stdio.h>

int main(){

int i=1,j=2,k=3,m=2;

printf("%d\n", j==1);
printf("%d\n", j==3);
printf("%d\n", i>=1 && j < 4);
printf("%d\n", m >=99 && k < m);
printf("%d\n", j>=1 || k== m );
printf("%d\n", k+m < j || 3 - j >= k);
printf("%d\n", !m);
printf("%d\n", !(j-m));
printf("%d\n", !(k > m));
printf("%d\n", !(j>k));

return 0;
}
