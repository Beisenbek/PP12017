//G,H,K,M,O
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

	reverse(a,a+n);

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}


	return 0;
}
