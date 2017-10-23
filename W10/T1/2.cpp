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

int main (){

	int aa = 2;
	int bb = 3;

	cout << pwr(bb,aa) << endl;

	return 0;
}
