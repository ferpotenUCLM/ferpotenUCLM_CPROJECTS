//EjercicioAumentos
#include <stdio.h>
int main(){
float salario,salarionuevo,aumento;
char nombre[40];
printf("Introduce nombre del trabajador :");
scanf("%s",&nombre);
printf("Introduce salario del trabajador :");
scanf("%f",&salario);
salarionuevo = 1.1*salario ;
aumento = salarionuevo-salario;
printf("El salario del trabajador %s es %.2f , con el aumento queda en %.2f ,total aumentado : %.2f",nombre,salario,salarionuevo,aumento);
return 0;
}
