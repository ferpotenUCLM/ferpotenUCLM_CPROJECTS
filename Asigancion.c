#include <stdio.h>
int main (){
int a,b,c,d,e;

a=b=c=20;	
d = a;
d = d + 3 ;
d += 3;//son iguales
e = d;
e -= 13;
d *=2;
d /=2;
	
printf("Valor de a,b,c es : %i %i %i \n",a,b,c);
printf("Valor de d es %i \n",d);
printf("Valor de e es %i \n",e);
return 0;
}
