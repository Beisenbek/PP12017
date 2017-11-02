#include <iostream>

using namespace std;

void f(int &a){
	a = a * a;
	cout << a << endl;
}

int main(){

	int x,y;
	cin >> x >> y;

	cout << "1st: "<< x << endl;
	f(x);
	cout << "2nd: "<< x << endl;


	cout << "1st: "<< y << endl;
	f(y);
	cout << "2nd: "<< y << endl;

	return 0;
}
