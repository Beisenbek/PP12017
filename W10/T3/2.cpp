#include <iostream>

using namespace std;

//f - function for finding subst of two numbers
int f(int a, int b){
	return a - b;
}

int main(){

	int x;
	int y;
	cin >> x >> y;

	cout << f(y,x) << endl;
	cout << f(x,y) << endl;

	return 0;
}