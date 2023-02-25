#include <stdio.h>

int main(){

	int x;

for (x=1; x<=10 ; x++) {
 if (x==5){
	continue;
}

printf("%d\n", x);
}

printf("\nUtiliza continue para ignorar la impresion del valor 5\n");


return 0;
}
