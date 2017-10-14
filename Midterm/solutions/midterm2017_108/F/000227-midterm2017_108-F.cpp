#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	int a[n];
	for (int i = 1; i<=n; i++){
		cin >> a[i];
	}
	for (int i = 1; i < k; i++){
		cout << a[i] << " ";
	}
	for (int i = n - k + 1; i <= n; i++){
		cout << a[i] <<" ";
	}
	
	return 0;
}
