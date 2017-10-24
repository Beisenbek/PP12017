#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;


void f(int a){

	for(int i = 0; i < 10;){
		cout << a << endl;
	}
	
}

int main (int n, char ** v){
	
	int x;
	cin >> x;

	f(x);

	cout << "ok" << endl;

	return 0;
}
