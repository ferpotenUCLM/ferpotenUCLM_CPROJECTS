#include <iostream>
using namespace std;
//ejemplo de funcion
//Funcion :Retorna valor
//Procedimiento : void funcion. (Realiza instrucciones)
//Simplificar programa , modularidad .
int times(int x,int y){
	//code
	return 1;
}

void bienvenida(){
	cout << "Bienvenido al Programa: \n";
}
int getedad(){
	int edad;
	string nombre;
	cout << "Introduce Nombre Jugador A : \n";
	cin >> nombre;
	cout << "Introduce tu edad :\n";
	cin >> edad ;
	cout << "Jugador de nombre "<< nombre<<" ";
	cout <<", su edad es :  "<< edad << "  anos." << endl;
	return edad;
}
int return_max_edad(int a,int b){
	if(a>b){
		cout << "\nJugador A mayor que B en edad \n";
		return a;
	}
	else if (a<b){
		cout << "\nJugador B mayor que A en edad \n";
		return b;
	}
	else{
		cout << "\nJugador A igual que B en edad \n";
		return b;
	}
}
int main(){
	bienvenida();
	int a,b = 0;
	a=getedad();
	b=getedad();
	cout << "EDAD_MAXIMA : "<< return_max_edad(a,b); 
}
