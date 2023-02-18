//ej7 calcular salario horas trabajadas * sueldo hora
#include <stdio.h>

int main(){
float salarioxhora,horas,dinerofinal;

printf("Introduce la cantidad de horas trabajadas y a el sueldo por hora :");
scanf("%f %f",&horas,&salarioxhora);
dinerofinal = horas*salarioxhora ;
printf("Sueldo final es de HORAS: %.2f  PAGOXHORA:%.2f  SALARIO FINAL: %.2f",salarioxhora,horas,dinerofinal);

}
