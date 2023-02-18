//Ejercicio 1
#include <stdio.h>

int main(){
float suma,resta,division,multiplicacion;
float a,b ;
suma=resta=division=multiplicacion= 0;
a = 0; 
b = 0;

printf("Introduce 2 numeros : \n");
scanf("%f %f",&a,&b);
printf("Los valores introducidos son A: %.2f y B: %.2f \n",a,b);
suma = a+b;
resta = a-b;
division = a/b;
multiplicacion = a*b;
printf("Los resultados son suma: %.2f , resta: %.2f, division: %.2f, multiplicacion: %.2f",suma,resta,division,multiplicacion);


return 0;	
}
