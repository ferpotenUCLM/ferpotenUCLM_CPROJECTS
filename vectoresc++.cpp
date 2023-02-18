//vector<type> name(n); siendo n el número de elementos.
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> calficaciones(5);
	for(int i=0;i<5;i++){
		cin >> calficaciones[i];
	}
	for(int i=0;i<5;i++){
		cout << calficaciones[i] << " ";
	}
	
	
return 0;
}
