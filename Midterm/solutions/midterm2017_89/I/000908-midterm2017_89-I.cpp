#include <iostream>
#include <cmath>


using namespace std;

int main() {
int n,k=0,b=0;
cin >> n;
int a[n][n];
for (int i=0; i<n; i++){
	for (int j=0; j<n; j++){
		if (i==j) k=k+a[i][j];
		else if (i+j==n) b=b+a[i][j];
	}
}
cout << k << endl;
cout << b << endl;
	return 0;
}