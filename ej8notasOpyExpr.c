//ej7 calcular salario horas trabajadas * sueldo hora
#include <stdio.h>

int main(){
float p1,p2,p3,exfinal,trabajofinal,notafinal;

printf("Introduce las notas de parcial 1 ,  parcial 2, parcial 3, examen final y trabajo final (en orden):");
scanf("%f %f %f %f %f",&p1,&p2,&p3,&exfinal,&trabajofinal);
notafinal = (((p1+p2+p3)/3)*0.55) + exfinal*0.3 + 0.15*trabajofinal ;
printf("La nota final es %.2f",notafinal);

}
