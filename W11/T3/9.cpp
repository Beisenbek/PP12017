#include <iostream>

using namespace std;


int main(){


	int * a = new int[4];//int a[4];

	*a = 1;//a[0]
	*(a+1) = 2;//a[1]
	*(a+2) = 3;//a[2]
	*(a+3) = 4;//a[3]

	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << *(a+2) << endl;
	cout << *(a+3) << endl;

	return 0;
}
