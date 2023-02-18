//ejemplo con do while
#include <stdio.h>
//break (rompe el bucle)y continue(salta una iteracion)
int main(){

int i = 0 ;
do{
	
	i++;
	if(i == 11){
		break;//rompe el bucle
	}
	if(i == 5){
		//se lo salta
		continue;
	}
	printf("%i\n",i);
}while(i<=15);
}
