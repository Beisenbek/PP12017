#include <iostream>

using namespace std;

int f(int n){
	int res = 0;
	for(int i = 1; i <= n; ++i){
		res += i;
	}
	return res;
}

int f2(int n){
	return (n*(n + 1))/2;
}

int f3(int n){
	if(n == 1) return 1;
	return f3(n-1) + n;
}

int main(){

	int n;
	cin >> n;
	cout << f(n) << endl;
	cout << f2(n) << endl;
	cout << f3(n) << endl;
	
	return 0;
}
