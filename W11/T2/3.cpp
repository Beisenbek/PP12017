#include <iostream>

using namespace std;


void swap2(int &x, int &y){
	int z = y;
	y = x;
	x = z;
}

int main(){

	int a = 3;
	int b = 4;


	swap2(a,b);
	cout << a << " " << b << endl;


	return 0;
}