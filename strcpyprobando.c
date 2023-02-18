#include <stdio.h>
#include <string.h>
int main(){

char origen[] = "Hola mi viejo , hoy toca arreglar el auto";
char destino[sizeof(origen)];

strcpy(destino,origen);
printf("%s",destino);
return 0;
}
