#include <iostream>

using namespace std;

void swap2(int &a, int &b){
	int z = a;
	a = b;
	b = z;
}


int main(){
	
	//int a[] = {1,2,3};
	int * a = new int[3];
	*(a+0) = 1;
	*(a+1) = 2;
	*(a+2) = 3;

	swap2(*(a+0),*(a+2));

	for(int i = 0; i < 3; ++i){
		cout << *(a+i) << " ";
	}

	cout << endl;

	return 0;
}