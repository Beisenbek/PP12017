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

	for(int i = 0; i < n - 1; i+=2){
		swap(a[i],a[i+1]);
	}

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}

	cout << endl;


	return 0;
}
