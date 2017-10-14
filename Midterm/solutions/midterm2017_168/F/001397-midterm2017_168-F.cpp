#include <iostream>

using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i){
		if (a[i]!= 2) cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}