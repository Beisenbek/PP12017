#include <iostream>

using namespace std;

int main(){

	int a[] = {1,2,3};
	/*
	int * a = new int[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	*/

	int * b = a;

	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;

	cout << a << " " << b << endl;

	return 0;
}
