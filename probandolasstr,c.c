#include <stdio.h>
//funciones de la librerio str
#include <string.h>
int main(){
	char tweet[] = {"La seleccion de Qatar no vale , le va a meter muchos goles Ecuador"};
	char destino[280];//Tweet max caracters
	char corte = 'G';
	strcpy(destino,tweet); // Copia Target/Destino fuente/origen
	
	printf(strlwr(destino)); // Todo a minuscula
	printf("\n");
	printf(strupr(destino)); // Todo a mayuscula
	printf("\n");
	strcat(destino," Gracias a Elon Musk"); //concatena
	printf(destino);
	printf("\n");
	printf("%s",strrchr(destino,corte)); //corta al encontrar un caracter
	printf("\n");
	printf(strrev(destino));// revierte 
	
	
}
