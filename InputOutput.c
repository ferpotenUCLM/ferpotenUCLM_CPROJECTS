#include <stdio.h>
int main (){
	
	/*Recuerda siempre & para asignar el valor con scanf*/
	int edad;
	float media;
	char inicial;
	char nombre[25];
	
	/*
	printf("Introduce tu edad (int) : \n");
	scanf("%i",&edad);
	printf("Tu edad es : %i \n",edad);
	
	printf("Introduce tu media academica (float) :");
	scanf("%f",&media);
	printf("Tu media es : %.4f \n",media);
	*/
	/*
	printf("Introduce la primera inicial de tu apellido  :\n");
	scanf("%c",&inicial);
	printf("Tu primera inicial es : %c \n",inicial);
	*/
	printf("Introduce tu nombre  :\n");
	//scanf("%s",&nombre);
	gets(nombre);
	printf("Bienvenido es : %s \n",nombre);
	
	
	return 0;
	
}
