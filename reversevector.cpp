//vector<type> name(n); siendo n el número de elementos.
#include <iostream>
#include <vector>
//PROGRAMA QUE INVIERTE UN VECTOR
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
void get_reverse(vector<int>& arr){
	vector<int> arr_aux(arr.size());
	
	for(int i=0,j=arr.size()-1;i<arr.size()&&j>=0;i++,j--){
		arr_aux[j]=arr[i];
	}
	arr = arr_aux;
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
	get_reverse(arr);
	imprimir_valores(arr);
	
	
return 0;
}
