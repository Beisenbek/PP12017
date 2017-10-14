#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n,k,x;

	cin >> n >> k;
	int a[n+1];

	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}

	a[k] = -10000;

	for(int i = 1; i <=n; ++i){
		if(a[i] >= 0) cout << a[i] << " ";
	}

	return 0;
}