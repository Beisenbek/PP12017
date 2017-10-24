#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

//f - function for finding substr between a and b
//a - first number
//b - second number
int f(int a, int b){
	return a - b;	
}

int main (){
	int y,z;

	cin >> y >> z;

	int x = f(y,z);

	cout << x << endl;

	return 0;
}

