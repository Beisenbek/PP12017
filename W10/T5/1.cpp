#include <iostream>

using namespace std;

int f(int x,int y);
int f2(int x,int y);

int f(int x,int y){
	int k = f2(x,y);
	int c = x + y;
	return c;
}

int f2(int x,int y){
	int j = f(x,y);
	int c = x - y;
	return c;
}

int main(){

	cout << f(4,2) << endl;
	cout << f2(4,2) << endl;
	cout << f2(2,4) << endl;

	return 0;
}