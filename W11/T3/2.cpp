#include <iostream>

using namespace std;

void f(int a){
	//cout << x * x << endl;
	cout << &a << endl;
}

int main(){

	int x;
	cin >> x;

	cout << &x << endl;

	f(x);
	
	return 0;
}
