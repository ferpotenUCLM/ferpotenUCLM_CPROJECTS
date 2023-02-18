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
void get_min(vector<int> arr,int& min){
		int i = 1;
		min = arr[0];
		while(i<arr.size()){
			if(arr[i] < min){
				min = arr[i];
			}
			i++;
		}
}
int main(){
	
	int size,min = 0;
	cout <<"Introduce tamano de vector :"<< endl;
	cin >> size;
	cout << endl;
	
	vector<int> arr(size);
	introducir_valores(arr);
	cout << endl;
	imprimir_valores(arr);
	cout << endl;
	get_min(arr,min);
	cout << endl;
	cout <<"min : "<< min << endl;
	
	
return 0;
}
