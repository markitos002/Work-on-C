#include <stdio.h>
#include <math.h>
int segundos(int h, int m, int s);

int main(){

int horaf,horai,mini,minf,segi,segf,segundosi,segundosf;

printf("ingrese la hora inicial, hora, minuto y seg separado por un espacio: \n");
scanf("%d%d%d",&horai,&mini,&segi);

printf("ingrese la hora final, hora, minuto y seg separado por un espacio: \n");
scanf("%d%d%d",&horaf,&minf,&segf);

segundosi= segundos(horai,mini,segi);
segundosf= segundos(horaf,minf,segf);

printf("La cantidad de segundos transcurridos desde las 12 fue: %d\n", segundosf - segundosi);


return 0;
}
int segundos(int h, int m , int s){

int total;

total = (h*3600)+(m*60)+(s);

return total;

}//fin de la funcion horas
