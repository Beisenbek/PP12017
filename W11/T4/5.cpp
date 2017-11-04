#include <iostream>

using namespace std;

int sum(int * x, int n){
	int res = 0;

	for(int i = 0; i < n; ++i){
		res = res + *(x + i);
	}

	return res;	
}


int main(){

	/*int * a = new int[1];
	int * b = a;
	*/
	//int a[] = {1,2,3};
	int * a = new int[5];
	*(a+0) = 1;//a[0] = 1;
	*(a+1) = 2;
	*(a+2) = 3;
	*(a+3) = 4;
	*(a+4) = 5;

	int k = sum(a,5);
	
	cout << k << endl;

	return 0;
}