#include <iostream>

using namespace std;

int main(){

	int a = 12;
	int b = 11;

	a = a + b;//23
	b = a - b;//23-11=12
	a = a - b;//23-12=11

	cout << a << " " << b;


	return 0;
}
