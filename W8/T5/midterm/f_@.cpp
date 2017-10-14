#include <iostream>

using namespace std;

int main(){
	
	int n,k;

	cin >> n >> k;

	int a[n];
	int b[n-1];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	k--;

	for(int i = 0; i < k; ++i){
		b[i] = a[i];
	}

	for(int i = k+1; i < n; ++i){
		b[i-1] = a[i];
	}

	for(int i = 0; i < n - 1; ++i){
		cout << b[i] << " ";
	}
	
	return 0;
}