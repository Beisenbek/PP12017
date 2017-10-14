#include <iostream>
#include <cmath>


using namespace std;

int main() {
int n,k=0,b=0;
cin >> n;
int a[n][n];
for (int i=1; i<=n; i++){
	for (int j=1; j<=n; j++){
		cin >> a[i][j];
	}
}
for (int i=1; i<=n; i++){
	for (int j=1; j<=n; j++){
		if (i==j) k=k+a[i][j];
		if (i+j==n+1) b=b+a[i][j];
				}
}
cout << k << endl;
cout << b << endl;
	return 0;
}