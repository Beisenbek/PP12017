#include <iostream>

using namespace std;

void f(int * a, int n){
	swap(*a,*(a+n-1));
}


int main(){

	/*int a[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	*/

	int * a;
	*(a+0) = 1;
	*(a+1) = 2;
	*(a+2) = 3;

	f(a,3);

	for(int i = 0; i < 3; ++i){
		cout << *(a + i) << " ";
	}

	cout << endl;

	return 0;
}