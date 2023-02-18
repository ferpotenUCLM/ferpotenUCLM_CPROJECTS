//vector<type> name(n); siendo n el número de elementos.
#include <iostream>
#include <vector>

using namespace std;

void introducir_valores(vector<int>& arr){
		cout << "Introduce valores en el vector :"<<endl;
		for(int i=0;i<arr.size();i++){
		cin >> arr[i];
		}
}
void imprimir_valores(vector<int> arr){
	cout << "Output :" << endl;
	for(int i=0;i<arr.size();i++){
		cout << arr[i] << " ";
	}
}
void get_eq(vector<int> arr,int& val){
		int cont = 0;
		int i = arr.size()-2;
		val = arr[arr.size()-1];
		while( i > 0 ){
			if(arr[i] == val){
				cont ++;
			}
			i--;
		}
		val = cont;
}
int main(){
	
	int size,val = 0;
	cout <<"Introduce tamano de vector :"<< endl;
	cin >> size;
	cout << endl;
	
	vector<int> arr(size);
	introducir_valores(arr);
	cout << endl;
	imprimir_valores(arr);
	cout << endl;
	get_eq(arr,val);
	cout << endl;
	cout <<"ocurrencias : "<< val << endl;
	
	
return 0;
}
