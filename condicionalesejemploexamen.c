#include <stdio.h>

int main(){
float p1,p2,p3,exfinal,trabajofinal,notafinal;

printf("Introduce las notas de parcial 1 ,  parcial 2, parcial 3, examen final y trabajo final (en orden):");
scanf("%f %f %f %f %f",&p1,&p2,&p3,&exfinal,&trabajofinal);
notafinal = (((p1+p2+p3)/3)*0.55) + exfinal*0.3 + 0.15*trabajofinal ;
printf("La nota final es %.2f  \n",notafinal);
if(p1>p2 && p1>p3 && p1>exfinal && p1>trabajofinal){
	printf("Sacaste mas nota en el primer parcial que en ninguna otra cosa");
}
else if (p2>p1 && p2>p3 && p2>exfinal && p2>trabajofinal){
	printf("Sacaste mas nota en el segundo parcial que en ninguna otra cosa");
}
else if(p3>p2 && p3>p1 && p3>exfinal && p3>trabajofinal){
	printf("Sacaste mas nota en el tercer parcial que en ninguna otra cosa");
}
else if(exfinal>p2 && exfinal>p1 && exfinal>p3 && exfinal>trabajofinal){
	printf("Sacaste mas nota en el examen final que en ninguna otra cosa");
}
else {
	printf("Sacaste mas nota en el trabajo final que en ninguna otra cosa");
}
}

