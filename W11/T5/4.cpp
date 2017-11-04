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

	swap(*(a+0),*(a+2));

	for(int i = 0; i < 3; ++i){
		cout << *(a + i) << " ";
	}

	cout << endl;

	return 0;
}