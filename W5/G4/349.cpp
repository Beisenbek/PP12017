#include <iostream>

using namespace std;


int main(){

	int a,b,c,d;

	cin >> a >> b >> c >> d;

	for(int x = 1000; x >=0; x--){
		if(a * x * x * x + b * x * x + c * x + d == 0){
			cout << x << " ";
		}
	}
	
	return 0;
}

