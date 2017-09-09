#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,b,c;
	cin >> a >> b >> c;

	if(a < b + c && b < a + c && c < a + b){
		a = a * a;
		b = b * b;
		c = c * c;
		
		if( a == b + c || b == a + c || c == b + a) cout << "right";
		else if( a > b + c || b > a + c || c > b + a) cout << "obtuse";
		else cout << "acute";
	}else{
		cout << "impossible";
	}


	return 0;
}
