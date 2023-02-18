//Sumar un numero y restar el siguiente
/*ejemplo 1-2+3-4+5-6+7*/
#include <stdio.h>
int main(){
int i = 0;
int n = 0;
int acumulado = 0;

printf("Dame un numero para llegar : \n");
scanf("%i",&n);

for(i = 0;i<=n ; i++){

if( (i%2) == 0 ){
acumulado -= i;
}
else{
acumulado += i;
	
}

}
printf("El resultado acumulado es %i",acumulado);
}
