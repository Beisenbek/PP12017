#include <iostream>

using namespace std;

int main(){

	int a[26];
	a[0] = 10;
	a[1] = 12;
	a[2] = 10;


	int sum = 0;

	sum += a[0];
	sum += a[1];
	sum += a[2];

	cout << sum << endl;

	return 0;
}
