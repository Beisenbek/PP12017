#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n, a[123], cnt = 0, mx = -12345678, ans = 0;

	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] > mx)
			mx = a[i];	
	}
	for(int i = 0; i < n; i++) 
		if(a[i] == mx) cnt++;
	cout << cnt;
	return 0;
}
