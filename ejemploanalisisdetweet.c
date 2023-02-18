/*

Eemplo contamos en unmero de vocales que aparecen en un tweet  en un tweet de 280 caracteres

*/
#include <stdio.h>
void contador(char tweet[280],int size);//Decalracion de funcion

int main(){
	
//variables declaracion	
char tweet[280];
int size = 0;
printf("Introduce el tweet a analizar lenght max 180 caracteres \n");
printf("\n");
gets(tweet);

printf("Tu tweet a analalizar es :\n   %s \n   ",tweet);
printf("\n");
size = sizeof(tweet);
contador(tweet,size);	
}
void contador(char tweet[280],int size){
int i,contadordeAs;

contadordeAs = 0;
//logica del tweet

for(i=0 ;i<size ;i++){
	
if(tweet[i] == 'a' || tweet[i] == 'A' ){
	contadordeAs++;
//	printf("%c \n",tweet[i]);
}	
}
printf("\n");
printf("Finalmente el numero de as/As es de %i\n",contadordeAs);

return;
}
