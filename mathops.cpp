#include <iostream>
using namespace std;
int main(){
	//importamos la condicion de decimales
	cout.setf(ios::fixed);
	//imponemos la condición estrictamente de 2 (decimales)
	cout.precision(2);
	
	string word; // tipo de operacion
	double a,b;
	
	while (cin >> word and word != "parar"){
		cin >>a;
		cin >>b;
		if(word=="suma"){
			cout << a+b << endl;
		}
		else if(word=="resta"){ 
		cout << a-b << endl;
		}
		else if(word=="cambio"){
			cout << -a << endl;
		}

	}
		
}
