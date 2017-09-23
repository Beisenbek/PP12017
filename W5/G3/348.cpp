#include <iostream>

using namespace std;

int f(int a1, int b1, int c1, int d1, int x){
	return a1 * x * x * x + b1 * x * x + c1 * x + d;
} 

int main(){

	int a,b,c,d;

	cin >> a >> b >> c >> d;


	for(int x = 0; x <= 1000; ++x){
		if(f(a,b,c,d,x) == 0){
			cout << x << endl;
		}
	}


	return 0;	
}
