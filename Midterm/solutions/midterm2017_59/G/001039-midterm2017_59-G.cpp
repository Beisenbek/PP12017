#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, l, r, ans, a[1234];
	
	cin >> n >> l >> r;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}	
	ans = a[l];
	a[l] = a[r];
	a[r] = ans;
	for(int i = 1; i <= n; i++) 
		cout << a[i] << ' ';
	return 0;
}