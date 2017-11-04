#include <iostream>

using namespace std;

void swap2(int &a, int &b){
	//cout << &a << " " << &b << endl;
	int z = a;
	a = b;
	b = z;
}

int main(){
	int x = 1;
	int y = 2;

	swap2(x,y);

	cout << x << " " << y << endl;

	return 0;
}