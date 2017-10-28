#include <iostream>
#include <map>

using namespace std;

int f(int x){
	cout << x << "<-" << endl;
	if( x == 1) return 0;
	if( x == 2) return 1;
	return f(x-1) + f(x-2);
}

int main(){

	int n;
	cin >> n;
	cout << f(n) << endl;

	return 0;
}