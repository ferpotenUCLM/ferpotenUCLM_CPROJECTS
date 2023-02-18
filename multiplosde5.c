//Programa para encontrar los multiplosde 5 de 1 hasta n
#include <stdio.h>
int main(){
int i = 0;
int n = 0;

printf("Dame un numero para llegar : \n");
scanf("%i",&n);

for(i = 0;i<=n ; i++){

if( (i%5) == 0 ){
	printf("El numero %i es multiplo de 5 \n",i);
}

}

}
