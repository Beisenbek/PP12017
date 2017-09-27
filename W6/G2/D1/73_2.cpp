#include <iostream>

using namespace std;

int a[1000000];

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int k = n;

	for(int i = 0; i
		< n - 1; ++i){
		if( a[i] == a[i+1]){
			k--;
		}
	}

	cout << k;

	return 0;
}
