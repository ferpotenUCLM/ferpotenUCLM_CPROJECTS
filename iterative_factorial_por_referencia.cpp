#include <iostream>
using namespace std;
void factorial(int &n){
	int sum = 1;
	if(n<=12 and n>=0){
		for(int i = 1;i<=n;i++){
			sum *= i;
		}
	}
	n = sum;
}
int main(){
	while(true){
	int n = 0;
	cin >> n ;
	cout << "==RES==\n";
	factorial(n);
	cout << n << endl;
	cout << "-------.\n";
	}
return 0;
}
