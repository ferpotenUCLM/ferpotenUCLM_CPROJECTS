#include <iostream>
#include <cmath>
using namespace std;
void dist_or(double& a,double& b){

b = pow(((a*a)+(b*b)), 1/2.); // d = raiz((a2-a1)^2 + (b2-b1)^2))
// d = raiz((a-0)^2 + (b-0)^2)) en este caso centro pto (0,0).
}
int main(){
	while(true){
	double a,b = 0;
	cin >> a ;
	cin >> b ;
	cout << "==RES==\n";
	dist_or(a,b);
	cout << b << endl;
	cout << "-------.\n";
	}
return 0;
}
