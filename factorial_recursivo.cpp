#include <iostream>
using namespace std;
int factorial(int n,int &sum){
		//if(i>n)
		if(n==0)
		{
			return 1;	
		}
		else
		{
			//sum *= i;
			//i++;
			sum = n*factorial(n-1,sum);
			return sum;
		}

}
int main(){
	while(true){
	int n = 0;
	int sum =1;
	cin >> n ;
	cout << "==RES==\n";
	factorial(n,sum);
	cout << sum << endl;
	cout << "-------.\n";
	}
return 0;
}
