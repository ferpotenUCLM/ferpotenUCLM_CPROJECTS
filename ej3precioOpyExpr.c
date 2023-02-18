//EjercicioDesucentos
#include <stdio.h>
int main(){
float precio,precionuevo,descuento;
printf("Introduce precio del producto :");
scanf("%f",&precio);
precionuevo = 0.85*precio ;
descuento = precio - precionuevo;
printf("El precio del producto es %.2f , con el decuento queda en %.2f ,total descontado : %.2f",precio,precionuevo,descuento);
return 0;
}
