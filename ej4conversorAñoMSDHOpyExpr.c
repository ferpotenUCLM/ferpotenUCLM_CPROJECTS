//Transformar a�os a meses
/*
1 a�o = 12 meses
1 mes = 4 semanas 
1 semana = 7 d�as
1 d�a = 24 horas
*/
//digita a�os con los que se har� la conversion
#include <stdio.h>

int main(){
float anos,ctmeses,ctsemanas,ctdias,cthoras;

printf("Introduce la cantidad en anos con los que se realizara la conversion :");
scanf("%f",&anos);
ctmeses = anos *12;
ctsemanas = ctmeses *4;
ctdias = ctsemanas *7;
cthoras = ctdias * 24;
printf("anos : %.2f meses: %.2f semanas: %.2f dias: %.2f horas: %.2f",anos,ctmeses,ctsemanas,ctdias,cthoras);

}
