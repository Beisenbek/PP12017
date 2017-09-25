#include <iostream>

using namespace std;

int main(){

	int a = 12;
	int b = 11;
	int c;

	int c = b;//11
	b = a;//12
	a = c;//11

	cout << a << " " << b;


	return 0;
}
