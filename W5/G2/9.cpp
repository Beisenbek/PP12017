#include <iostream>

using namespace std;

int main(){

	int a  = 0;
	int b = 0;

	cout << a + 1 << endl;
	cout << 1 + a << endl;


	int c = 0;
	int d = 0;

	c = c + 1;
	d += 1;

	cout << c << endl;
	cout << d;

	int t = 0;

	t += a;
	t -= 1;
	t *= b;
	t /= b;


	return 0;
}
