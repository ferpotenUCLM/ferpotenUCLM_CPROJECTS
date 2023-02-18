//operador interrogacion
/*
Condicion ? Expresion1: Espresion2
*/
#include <stdio.h>
int main(){
	int numero;
	puts("Escribe un numero por teclado a continuacion : \n");
	scanf("%i",&numero);
	(numero%2 == 0) ? printf("Es par\n") : printf("Es impar");
	return 0;
}
