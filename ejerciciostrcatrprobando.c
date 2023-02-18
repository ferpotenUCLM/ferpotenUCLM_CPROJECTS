#include <stdio.h>
#include <string.h>
int main(){
//destino origen
char origen[] = "Hola mi viejo , hoy toca arreglar el auto ";
char origen1[] = "AAAAAAAAAAAAAAA BBBBBBBBBBB CCCCCCCCCCCCC";
char destino[sizeof(origen)+sizeof(origen)+sizeof(origen1)];

strcpy(destino,origen);
strcat(destino,origen);
strcat(destino,origen);
strcat(destino,origen1);
printf("%s",destino);
return 0;
}
