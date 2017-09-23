#include <iostream>

using namespace std;

int main(){

	int i = 1;
	int j = 1;

	int c = i++ + ++j;

	cout << c << endl;
	cout << i << endl;
	cout << j << endl;


	
	return 0;
}
