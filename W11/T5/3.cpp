#include <iostream>

using namespace std;


int main(){

	/*int a[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	*/

	int * a = new int[3];
	*(a+0) = 1;
	*(a+1) = 2;
	*(a+2) = 3;

	cout << (a+1) << endl;
	cout << (a) << endl;

	return 0;
}