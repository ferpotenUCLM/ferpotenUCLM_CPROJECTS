//area del trapecio 
/*
((Base Mayor * base menor )/2)* altura
*/
#include <stdio.h>
int main(){
float BaseMayor,Basemenor,altura,area;


printf("Introduce a continuacion los valores de base mayor,base menor y la altura respectivamente : \n");
scanf("%f %f %f",&BaseMayor,&Basemenor,&altura);
area = ((BaseMayor*Basemenor)/2)*altura;
printf("El valor para la base mayor es %.2f , para la menor es %.2f, la altura es %.2f , entonces el area es %.2f",BaseMayor,Basemenor,altura,area);
return 0;
}
