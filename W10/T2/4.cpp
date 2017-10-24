#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

//f - function for finding substr between a and b
//a - first number
//b - second number
int f(int a, int b){
	return a + b;	
}

int main (){
	
	//char x[] = {'9',' ','2','4'};
	string s = "123";
	char x[3];
	x[0] = '1';
	x[1] = '2';
	x[2] = '5';

	string r(x);

	int y = stoi(x);

	cout << y << endl;

	return 0;
}
