#include <stdio.h>
#define PI 3.1416

int main(){
	/*
	AREA CIRCULO = PI*R^2
	AREA TRIANGULO = ( BASE * ALTURA ) /2
	AREA CUADRADO = LADO * LADO
	*/
	float radio,base,altura,lado;
	float areacirculo,areacuadrado,areatriangulo;
	
	printf("Introduce radio del circulo para calcular su area :\n");
	scanf("%f",&radio);
	printf("El radio es %.2f \n",radio);
	areacirculo = PI * (radio*radio);
	printf("El area del circulo es %.2f \n",areacirculo);
	
	
	printf("Introduce base y altura (en ord) del triangulo para calcular su area :\n");
	scanf("%f %f",&base,&altura);
	printf("La base es %.2f , la altura es %.2f \n",base,altura);
	areatriangulo = (base * altura)/2;
	printf("El area del triangulo es %.2f \n",areatriangulo);
	
	printf("Introduce lado del cuadrado para calcular su area :\n");
	scanf("%f",&lado);
	printf("El lado mide %.2f \n",lado);
	areacuadrado = lado * lado; //pow(lado,2)
	printf("El area del cuadrado es %.2f \n",areacuadrado);
	
	return 0;
}
