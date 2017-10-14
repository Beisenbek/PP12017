#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int a[n][n];
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
		cin >> a[i][j];
	}
	}
int k1=0, k2=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
		if(i==j){
			k1 = k1+a[i][j];
		}
		if(i==n-1-j){
			k2= k2 + a[i][j];
		}
	}
	}
	cout << k1 << " " << k2;
	return 0;
}
    