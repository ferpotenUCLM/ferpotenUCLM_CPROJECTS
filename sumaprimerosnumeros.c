//suma incremental 
#include <stdio.h>
int main(){
int i,numero_objetivo,suma;
suma = 0;
i = 0;
printf("Dame un numero para sumar : \n");
scanf("%i",&numero_objetivo);
for(i =0; i<= numero_objetivo;i++){
	
	suma += i;
}
printf("La suma final tiene como resultado %i",suma);
	
}
