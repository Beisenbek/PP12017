#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int pwr(int a, int b){

	int res = 1;

	for(int i = 1; i <= b; ++i){
		res = res * a;
	}

	return res;

}

int main (int n, char ** args){

	char * a = args[1];
	char * b = args[2];

	int x = atoi(a); 
	int y = atoi(b); 

	cout << pwr(x,y) << endl;

	return 0;
}
