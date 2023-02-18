#include <stdio.h>

int main(){

FILE *fp;
char ubicacion[] = "C:\\Users\\ferna\\Documents\\Archivos C\\prueba.txt";
char mode[] ="r+";

fp = fopen(ubicacion,mode);
if(fp == NULL){
	printf("Entonces el archivo no existe\n");
}
else{
	printf("Entonces el archivo si existe en ubicacion %s\n",ubicacion);
}

	
}
