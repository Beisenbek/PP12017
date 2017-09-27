#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[26];
	int sum = 0;
	int x;

	for(int i = 0; i < 3; ++i){
		cin >> x;
		a[i] = x;
	}

	for(int i = 0; i < 3; ++i){
		sum += a[i];
	}

	cout << sum << endl;

	return 0;
}
