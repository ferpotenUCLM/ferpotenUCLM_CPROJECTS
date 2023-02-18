
#include <stdio.h>

void agregar(int *a){
        *a += 10; //! a = a+10;
}

int main() {

    int numero;
    printf("Escribe el numero\n");
    scanf("%d",&numero);
    printf("\nValor antes de la funcion: %d",numero);
    agregar(&numero);
    printf("\nValor despues de la funcion: %d",numero);

//* en ambos casos (antes y después de la función), el programa
//* imprime el mismo valor que hayas digitado. Esto se debe a que solamente se pasó a la
//* función el número que contenía la variable.

    return 0;
}
