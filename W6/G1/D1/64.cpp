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

	for(int i = 0; i < n; i = i + 1){
		if(a[i] % 2 == 0) cout << a[i] << " ";
	}

	return 0;
}
