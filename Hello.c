//VARIABLE PREPROCESADOR Y VARIABLES
#include <stdio.h> // libreria estandar
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
//MACROS

#define PI 3.1416

int y = 5; //VARIABLE GLOBAL

/* function declaration */
int suma(int x,int y);

int main(){//Funcion principal
	/*
	comentario multilinea
	
	printf("Hello World\n");
	printf("Has hecho un salto de linea .");
	printf("Ej1");
	printf("Ej2");
	printf(" ----- No uso salto de linea\n");
	
	int x = 10;//VARIABLE LOCAL
	float suma = 0;
	suma = PI + x;
	printf("La suma es :  %.2f",suma);
	
	int res = 0;
	int b = PI;
	/*
	res= suma(x,b);
	printf("El resultado es :%i \n",res);
	printf(" Resultado obtenido");
	*/
	
	int a = 1;
	char myLetter = 'D';
	float c = 1.5;
	//bool d = 1;
	double e = 1.55555555555555;
	short f = 2; 
	unsigned int o = 123;//solo positivo
	//long g = 12.3;
	//long double h =12.333333323;
	
	printf("int %i \n",a);
	printf("char %c \n",myLetter);
	printf("float %f \n",c);
	printf("double %lf \n",e);
	printf("short %i \n",f);
	/*
	printf("%l \n",);
	printf("%i \n",);
	printf("%i \n");
	*/
	return 0;

}
/*
int suma(int x,int y) {
	/* local variable declaration
	int z = 0; 
	
	z = x+y;
	
	return z;
}
*/
