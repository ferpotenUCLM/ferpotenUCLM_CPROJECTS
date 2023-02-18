#include <iostream>
using namespace std;
int main(){
	int n,sum = 0;
	cout<<"Introduce n :\n";
	cin>>n;
	for(int i = 0;i<=n;i++){
		sum += i*i;
	}
	cout<<sum<< endl;
	return 0;
		
}
