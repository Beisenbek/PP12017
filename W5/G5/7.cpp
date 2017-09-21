#include <iostream>

using namespace std;

int main(){

	int a = 1;
	int b = 1;

	int c = a++ + 1;
 	int d = ++b + 1;

 	int f = a++ + ++b;

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
	cout << f << endl;

	return 0;
}