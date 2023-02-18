#include <stdio.h>

int main(){

FILE *fp;
char ubicacion[] = "C:\\Users\\ferna\\Documents\\Archivos C\\prueba123.txt";
char mode[] ="a";// creando archivo
char texto[280];

fp = fopen(ubicacion,mode);
if(fp == NULL){
	printf("Entonces el archivo no se crea/append \n");
}
else{
	printf("Introduce el texto al archivo \n");
	fflush(stdin);
	gets(texto);
	printf("Entonces el archivo si se crea/append vamos a escribir el texto ... %s\n",ubicacion);
	fprintf(fp,"%s",texto);// se pordría meter texto por el %s
}
fclose(fp);
	
}
