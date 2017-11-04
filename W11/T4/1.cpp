#include <iostream>

using namespace std;

int main(){

	/*int a[10] => int * a = new int[10];

	a[0] => *(a + 0);
	a[1] => *(a + 1)
	*/

	//int, float, char, bool, double,
	//int[2],float[2],string,char[2],

	int x = 3;

	int a[10];

	cout << a << endl;
	cout << *&*&x << endl;

	return 0;
}