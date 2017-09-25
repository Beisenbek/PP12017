#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[26];
	int sum = 0;

	for(int i = 0; i < 3; ++i){
		cin >> a[i];
	}

	for(int i = 0; i < 3; ++i){
		sum += a[i];
	}

	cout << sum << endl;

	return 0;
}
