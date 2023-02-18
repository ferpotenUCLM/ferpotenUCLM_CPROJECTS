#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
int pid;
switch(pid=fork()){
case 1:
	printf("Proceso hijo %d de padre %d",getpid(),getppid());
	while(1);
	break;

case -1:
	printf("Error en crear proceso");
	//exit(1);
	break;	
default:
	printf("Proceso padre %d cuyo padre será la terminal %d",getpid(),getppid());	
	while(1);
	break;
}
return 0;
}
