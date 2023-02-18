//Uasndo caracteres para escribir en archivos
#include <stdio.h>

int main(){

FILE *fp;
char ubicacion[] = "C:\\Users\\ferna\\Documents\\Archivos C\\prueba134.txt";
char mode[] ="a";// creando archivo


fp = fopen(ubicacion,mode);
if(fp == NULL){
	printf("Entonces el archivo no se crea/append \n");
}
else{
char letra;
while((letra = getchar()) != '\n'){//obtiene el caracter por stdin

	fputc(letra,fp);//Escribe en el archivo
	}
}
fclose(fp);
	
}
