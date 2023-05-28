/*******************************************************************************************************************
Nombre: Grades with letter

Proposito: print a letter according to the assigned grade

Uso: input the value of the grade to return the letter of the grade
********************************************************************************************************************/

char line[100]; /*line to input the value of the grade */
int grade; /* varible to store the grade */


#include <stdio.h>

int main(){


printf("please enter the grade that you recieved (from 0 to 100): ");
fgets(line,sizeof(line),stdin);
sscanf(line, "%d" , &grade); /* conversion to integer */

if( grade  <=60) /* interval comparison */
	printf("F\n");
if( (grade >=61) && (grade<=70)) /* interval comparison between 61 and 70 */
	printf("D\n");
if((grade >=71) && (grade<=80)) /* interval comparison between 71 and 80 */ 
	printf("C\n");
if((grade>=81) && (grade<=90)) /* interval comparison between 81 and 90 */
	printf("B\n");
if((grade>=91) && (grade<=100)) /* interval comparison between 91 and 100 */
	printf("A\n");



return 0;
}
