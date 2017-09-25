#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int k = 0;

	for(int i = 1; i < n; i = i + 1){
		if(a[i] > a[i-1]){
			k = k + 1;
		}
	}

	cout << k;

	return 0;
}
