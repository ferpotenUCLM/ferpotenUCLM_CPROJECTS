//STRCMP strcmp(Cadena1,Cadena2); comparador de cadenas si son iguales entonces devuelve 0

#include <stdio.h>
#include <string.h>

int main(){
//destino origen
char cad1[] = "AAAAAAAAAAAAAAA BBBBBBBBBBB CCCCCCCCCCCCC";
char cad2[] = "AAAAAAAAAAAAAAA BBBBBBBBBBB CCCCCCCCCCCCC";
//fflush(stdin) podemos limpiar el buffer de entrada
int val = strcmp(cad1,cad2);
if(val == 0){
	printf("Entonces ambas cadenas son iguales");
}
else{
	printf("Entonces ambas cadenas no son iguales");
}

return 0;
}
