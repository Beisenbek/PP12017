#include <iostream>
#include <cmath>


using namespace std;

int main() {
int n,k;
cin >> n;
cin >> k;
int a[n];
for(int i=1; i<=n; i++) {
	cin >> a[i];
}
for (int i=1; i<=n; i++) {
	if (i==k) continue;
	else cout << a[i];
}


	return 0;
}