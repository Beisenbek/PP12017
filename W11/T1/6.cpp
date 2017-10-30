#include <iostream>

using namespace std;

int a[4];

int f(){
	int res = 0;

	for(int i = 0; i < 4; ++i){
		res += a[i];
	}

	return res;
}


int main(){

	for(int i = 0; i < 4; ++i){
		cin >> a[i];
	}

	int y = f();

	cout << y << endl;

 
	return 0;
}