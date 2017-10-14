#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n, a[123][123], cnt, sum = 0;

	cin >> n;
	for(int i = 0; i < n; i++){ 
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
			if(i == j) cnt += a[i][j];
			if (j == n - 1 - i) sum += a[i][j];
		}
	}
	cout << cnt << endl << sum;
	return 0;
}
