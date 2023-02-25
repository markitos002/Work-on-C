#include <stdio.h>

int main(){

int uni,dec,cent,i,a;


for(a=1;a<=100;a++){
    i=a;


  uni = i%10; i = i/10;
  dec = i%10; i = i/10;
  cent = i%10; i =i/10;

    printf(" %d ",a);

switch(cent){
   case 1: printf("C");break;
   }
switch(dec){
   case 1: printf("X");break;
   case 2: printf("XX");break;
   case 3: printf("XXX");break;
   case 4: printf("XL");break;
   case 5: printf("L");break;
   case 6: printf("LX");break;
   case 7: printf("LXX");break;
   case 8: printf("LXXX");break;
   case 9: printf("XC");break;
   }
switch(uni){
   case 1: printf("I");break;
   case 2: printf("II");break;
   case 3: printf("III");break;
   case 4: printf("IV");break;
   case 5: printf("V");break;
   case 6: printf("VI");break;
   case 7: printf("VII");break;
   case 8: printf("VIII");break;
   case 9: printf("IX");break;
   }
   printf("\n");
  }
printf("\n");

return 0;
}
