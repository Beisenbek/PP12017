#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int f(int x, int n, int s){
	if(x > n){
		return s;
	}
	return f(x + 1, n, s + x);
}

int main (){

	int n;
	cin >> n;
	cout << f(1,n,0) << endl;

	return 0;
}
