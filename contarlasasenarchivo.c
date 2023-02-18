#include <stdio.h>

int main(){
char opcion;
FILE *fd;
char letra;
int contador;
char ubicacion[] = "C:\\Users\\ferna\\Documents\\Archivos C\\prueba123.txt";
fd = fopen(ubicacion,"r");
char archivo[5000];

if(fd == NULL){
	
	printf("No existe");
}
else{
printf("Entonces el archivo si existe en ubicacion %s\n",ubicacion);
printf("\n");
printf("\n");
printf("\n");
   while((letra = fgetc(fd)) != EOF)
      printf("%c", letra); contador ++;
      fflush(stdin);
      archivo[contador] = letra;
strupr(archivo);     
printf("%s",archivo);      
}

/*
printf("Elige una opcion entre todas :");
scanf("%c",opcion);
case 'M' :
	
case 'm' :	

*/




}
