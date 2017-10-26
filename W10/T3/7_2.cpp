#include <iostream>

using namespace std;


int main(int n, char ** argv){

	char x[3];
	x[0] = '1';
	x[1] = '2';
	x[2] = '3';

	/*for(int i = 0; i < 3; ++i){
		cout << x[i];
	}*/

	x[3] = '\0';
	cout << x;

	cout << endl;
	return 0;
}