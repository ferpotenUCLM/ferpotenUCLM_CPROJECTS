#include <stdio.h>
int main(){
	char dia;
	puts("Selecciona un numero de los dias a las semana 1 al 7\n");
	scanf("%c",&dia);
	switch(dia){
	case 1:
	printf("Seleccionaste Lunes");
	break;
	
	case 2:
	printf("Seleccionaste Martes");
	break; 	
	
	case 3:
	printf("Seleccionaste Miercoles");
	break;
	
	case 4:
	printf("Seleccionaste Jueves");
	break;
	
	case 5:
	printf("Seleccionaste Viernes");
	break;
	
	case 6:
	printf("Seleccionaste Sabado");
	break;
	
	case 7:
	printf("Seleccionaste Domingo");
	break;
	
	}
	switch(dia){
	case 'a':
	printf("Seleccionaste Lunes");
	break;
	
	case 'b':
	printf("Seleccionaste Martes");
	break; 	
	
	case 'c':
	printf("Seleccionaste Miercoles");
	break;
	
	case 'd':
	printf("Seleccionaste Jueves");
	break;
	
	case 'e':
	printf("Seleccionaste Viernes");
	break;
	
	case 'f':
	printf("Seleccionaste Sabado");
	break;
	
	case 'g':
	printf("Seleccionaste Domingo");
	break;
	
	}
	return 0;
}
