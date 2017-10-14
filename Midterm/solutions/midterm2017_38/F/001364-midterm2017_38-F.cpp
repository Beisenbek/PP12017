#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 2; i <= n; ++i){
		cin >> a[i];
	}
	for(int i = 2; i <= n; ++i){
		if(a[i]==k){
			cout << a[i];
		}
	}
	return 0;
}