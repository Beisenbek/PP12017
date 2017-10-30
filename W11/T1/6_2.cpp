#include <iostream>

using namespace std;


int f(int * a){
	int res = 0;

	for(int i = 0; i < 4; ++i){
		res += *(a+i);
	}

	return res;
}


int main(){

	//int *a = new int[4];
	int a[4];

	for(int i = 0; i < 4; ++i){
		cin >> a[i];
	}

	int y = f(a);

	cout << y << endl;

 
	return 0;
}