#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,k;

	cin >> n >> k;

	int d = k / n;

	int ans = k - n * d;

	cout << ans;

	return 0;
}

