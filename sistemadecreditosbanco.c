//prestamos edad ingresos ahorro
#include <stdio.h>

int darprestamo(int edad,float ingresos,float ahorro,int cerrojo_concedido);


int main(){
char nombre[50];	
int edad,cerrojo_concedido,dato_final;
float ingresos,ahorro;

printf("Introduzca su nombre : \n");	
gets(nombre);
printf("Introduzca su edad : \n");
scanf("%i",&edad);
printf("Introduzca sus ingresos : \n");
scanf("%f",&ingresos);
printf("Introduzca sus ahorro : \n");
scanf("%f",&ahorro);
printf("Usted es %s de %i de edad , con ingresos %.1f y ahorro %.1f \n",nombre,edad,ingresos,ahorro);
//concedercredito();
dato_final = darprestamo(edad,ingresos,ahorro,cerrojo_concedido);

return 0;
}
int darprestamo(int edad,float ingresos,float ahorro,int cerrojo_concedido){
	if(edad >= 40 && ingresos >= 166000.00 ){
		cerrojo_concedido = 1;
		printf("Prestamo concedido \n");
	}
	else if(edad <= 40 && ahorro >= 433.00 ){
		cerrojo_concedido = 1;
		printf("Prestamo concedido \n");
	}
	else if(edad >= 40 && ahorro >= 657.00 ){
		cerrojo_concedido = 1;
		printf("Prestamo concedido \n");
	}
	else{
	 printf("Prestamo no concedido \n");
	}
}
