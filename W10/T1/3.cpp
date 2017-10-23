#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main (int n, char ** args){

	cout << n << endl;


	for(int i = 0; i < n; ++i){
		cout << args[i] << endl;
	}



	return 0;
}
