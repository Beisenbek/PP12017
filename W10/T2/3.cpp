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

int main (int n, char ** v){
	if( n > 1){
		int a = atoi(v[1]);
		int b = atoi(v[2]);
		cout << f(a,b) << endl;
	}else{
		cout << "please, enter two numbers" << endl;
	}

	return 0;
}
