#include <iostream>

using namespace std;

int d[1010];

int f2(int n){
	if(d[n] != -1) return d[n];
	d[n] = f(n-1) + f(n-2);
	return d[n];
}

int main(){

	int n;
	cin >> n;
	
	d[1] = 0;
	d[2] = 1;

	for(int i = 3; i <= n; ++i){
		d[i] = -1;
	}

	cout << f2(n) << endl;
	
	return 0;
}
