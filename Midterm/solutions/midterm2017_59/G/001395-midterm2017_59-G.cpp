#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, l, r, ans, a[123456];
	cin >> n >> l >> r;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	reverse(a+l, a+r+1);
	for(int i = 1;i <= n; i++)
		cout << a[i] << ' ';

	
	return 0;
}