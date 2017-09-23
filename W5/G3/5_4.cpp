#include <iostream>

using namespace std;

int main(){

	int i = 1;
	int j = 1;

	int a = i++ + ++j; //[1] + [2]

	//2
	int b = i++ + ++i; //[2] + [4]

	cout << a << endl;
	cout << b << endl;
	cout << i << endl;

	return 0;	
}
