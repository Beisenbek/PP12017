#include <iostream>

using namespace std;

int sum2(int * begin, int * end){
	int res = 0;

	for(int * it = begin; it != end; it++){
		res = res + *it;
	}

	return res;	
}


int main(){

	/*int * a = new int[1];
	int * b = a;
	*/
	//int a[] = {1,2,3};
	int n = 5;
	int * a = new int[n];
	*(a+0) = 1;//a[0] = 1;
	*(a+1) = 2;
	*(a+2) = 3;
	*(a+3) = 4;
	*(a+4) = 5;

	int k = sum2(a,a + n);
	
	cout << k << endl;

	return 0;
}