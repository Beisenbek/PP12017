#include <iostream>

using namespace std;


int main(){

	int a,b,c,d,e, k = 0;

	cin >> a >> b >> c >> d >> e;

	for(int x = 1000; x >=0; x--){
		if( x == e) continue;
		if(a * x * x * x + b * x * x + c * x + d == 0){
			k++;
		}
	}

	cout << k;
	
	return 0;
}

