#include <stdio.h>

//ejemplo de alcande de un identificador

void usoLocal(void);
void usoStaticLocal(void);
void usoGlobal(void);

int x=1; //variable global

int main(){

int x=5; //variable local en main
printf("la x local fuera del alcance de main es %d\n",x);
     {// comienza nuevo alcance
      int x = 7; //variable local con nuevo alcance
	printf("la x local en el alcance interno de main es %d\n",x);
     }// fin del nuevo alcance
printf("la x local en el alcance externo de main es %d\n",x);

usoLocal(); //usolocal contiene una x local
usoStaticLocal();//usostaticlocal contiene una x local estatica
usoGlobal();//uso global utiliza una x global
usoLocal();//reinicializa la x local automatica
usoStaticLocal();//static local x retiene su valor previo
usoGlobal();//x global tambien retiene su valor 

printf("\nx local en main es %d\n",x);

return 0;
}// fin de la funcion main

//usoLocal reinicializa la variable local x durante 1 llamada
void usoLocal(void){

int x=25; // se inicializa cada vez que se llama a usoLocal
printf("\nla x local en usoLocal es %d despues de entrar a usoLocal\n",x);
x++;
printf("la x local en usoLocal es %d antes de salir de usoLocal\n",x);

}//fin de la funcion usoLocal
//void staticlocal inicializa la variable static local x solo la primera vez que se invoca la funcion, el valor de x
// se guarda entre las llamadas a esta funcion
void usoStaticLocal(void){
//se inicializa solo la primera vez que se invoca a staticlocal
static int x=50;
printf("\nla x local estatica es %d al entrar a usoStaticLocal\n",x);
x++;
printf("la x local estatica es %d al salir de usoStaticLocacl\n",x);
}//fin de la funcion usoStaticLocal
//la funcion usoGlobal modifica la varible global x durante cada llamada
void usoGlobal(void){
printf("\nla x global es %d al entrar a usoGlobal\n",x);
x*=10;
printf("la x global es %d al salir de usoGlobal\n",x);

}// fin de la funcion usoGlobal

