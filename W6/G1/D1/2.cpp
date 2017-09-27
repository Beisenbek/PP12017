#include <iostream>

using namespace std;

int main(){

	int a[26];
	int sum = 0;

	a[0] = 10;
	a[1] = 12;
	a[2] = 10;

	for(int i = 0; i < 3; ++i){
		sum += a[i];
	}

	cout << sum << endl;

	return 0;
}
