#include <iostream>

using namespace std;

int main(){

	int i = 1;
	int j = 1;

	int a = i++ + ++j;

	cout << a << endl;
	cout << i << endl;
	cout << j << endl;


	
	return 0;
}