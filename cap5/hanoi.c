#include <stdio.h>

int hanoi (int d);

int main(){
int dc;
printf("Indique la cantidad de discos que desar mover: \n");
scanf("%d",&dc);

printf("Los movimientos son: \n");
hanoi(dc);


return 0;
}
int hanoi (int d){
int  i=1,t=2,f=3;

if(d == 1 ){
i=d;
t=i-d;
f=f-t;
printf("mueva el disco %d al asta %d\n",d,f);
}
else{
i=d;
t=hanoi(d-1);
f=f-t;

printf("mueva el disco %d al asta %d\n",i,f);
    }
}//fin de la funcion hanoi
