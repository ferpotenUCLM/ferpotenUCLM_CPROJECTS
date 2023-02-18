#include <stdio.h>
int main(){

int a = 0;
int b;	
b = ++a;
/*Pre incremento la variable a = 1 y b = 1 se incrementan las dos*/	
printf(" Para a = 0 y b = 0 :\n a:%i b:%i en preincremento \n",a,b);
a = 0;
b = a++;
/*Post incremento la variable a = 1 pero b = 0 obtiene elemento anterior al incremento */	
printf("a:%i b:%i en postincremento",a,b);
return 0;
} 
