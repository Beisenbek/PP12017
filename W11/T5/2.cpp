#include <iostream>

using namespace std;

void swap2(int &x, int &y){
	cout <<"copy: "<< &x << " " << &y << endl;

	int z = x;
	x = y;
	y = z;
	//cout <<  x << " " << y << endl;
}

int main(){


	int a = 4;
	int b = 8;

	swap2(a,b);

	cout << "original: "<< &a << " " << &b << endl;

	//cout << a << " " << b << endl;


	return 0;
}