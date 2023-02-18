#include <stdio.h>
#include <math.h>
/* LIBRERIAS
#include <string.h>
#include <stdlib.h>
*/
#define PI 3.1416 //MACRO
int y = 5 ; //Variable Global
int main(){
	int base = 0; // Variables locales
	int suma = 0;
	int lado = 0;
	int area = 0;
	int radio = 0;
	int h = 0;
	int base_menor = 0;
	int opcion = 0;
	
	printf("Menu Programa areas : \n");
	printf("1 . AREA DE UN CILINDRO  . \n");
	printf("2 . AREA DE UN CUADRADO  . \n");
	printf("3 . AREA DE UN TRIANGULO .\n");
	printf("4 . AREA DE UN TRAPECIO  . \n");
	printf("5 . AREA DE UN RECTANGULO. \n");
	printf("Introduce una opcion     : \n");
	scanf("%d", &opcion);
	printf("Opcion seleccionada : %d .  \n",opcion);
	switch(opcion){
		case 1 :
			printf("Area del ciclindro \n:");
			printf("=========================================================================================================\n");
			printf("Introduce radio: \n");
			scanf("%d", &radio);
			printf("Introduce altura: \n");
			scanf("%d", &h);
			area = (2*PI*radio*h)+(2*PI*pow(radio,2));
			printf("Area : %d .",area);
			break;
		case 2 :
			printf("Area del cuadrado \n:");
			printf("==========================================================================================================\n");
			printf("Introduce lado: \n");
			scanf("%d", &lado);
			area = pow(lado,2);
			printf("Area : %d .",area);
			break;
		case 3 :
			printf("Area del triangulo :");
			printf("===========================================================================================================\n");
			printf("Introduce base: \n");
			scanf("%d", &base);
			printf("Introduce altura: \n");
			scanf("%d", &h);
			area = (base*h)/2;
			printf("Area : %d .",area);
			break;	
		case 4 :
			printf("Area del trapecio \n:");
			printf("===========================================================================================================\n");
			printf("Introduce base: \n");
			scanf("%d", &base);
			printf("Introduce base menor: \n");
			scanf("%d", &base_menor);
			printf("Introduce altura: \n");
			scanf("%d", &h);
			area = ((base+base_menor)*h)/2;
			printf("Area : %d .",area);
			break;
		case 5 :
			printf("Area del rectangulo \n:");
			printf("===========================================================================================================\n");
			printf("Introduce lado: \n");
			scanf("%d", &lado);
			printf("Introduce altura: \n");
			scanf("%d", &h);
			area = lado*h;
			printf("Area : %d .",area);
			break;												
	}
	return 0;
	
}
