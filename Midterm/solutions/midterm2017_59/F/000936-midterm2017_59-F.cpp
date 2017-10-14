#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, k, a[12345], b[12345];
	
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(i == k) continue;
		b[i] += a[i];
	}
	for(int i = 1; i <= n; i++) {
		if(i != k)
			cout << b[i] << ' ';
	}
	return 0;
}