#include <iostream>
#include <cstring>

using namespace std;

void f1(int a){
	cout << "I'm in f1" << endl;

	int x = a * 3;
	cout << x << endl;
}

int f2(int a){
	cout << "I'm in f2" << endl;
	int x = a * 2;
	cout << x << endl;
	return x;
}

int main (){

	int b = 2;

	f1(b);
	f2(b);

	return 0;
}