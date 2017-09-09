#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a,b,c,d,x;

	cin >> a >> b >> c >> d;

	if( a == 0){
		if( b == 0){
			cout << "INF";
		}else{
			cout << "NO";
		}
	}else{
		if(b % a == 0){
			x = -b/a;
			if( c * x + d == 0){
				cout << "NO";
			}else{
				cout << x;
			}
		}else{
			cout << "NO";
		}
	}
	

	return 0;
}
