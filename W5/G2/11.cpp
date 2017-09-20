#include <iostream>

using namespace std;

int main(){

	int i = 1;
	int j = 1;


	int a = i++;
	int b = ++j;

	cout << a << " " << b << endl;
	cout << i << " " << j;


	
	return 0;
}