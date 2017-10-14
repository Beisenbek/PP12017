#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;

	cin >> n;
	int cnt1 = 0, cnt2 = 0;
	int A[n][n];

	for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
			cin >> A[i][j];
			if (i+j == n-1)
				cnt2 += A[i][j];
			if (i == j)
				cnt1 += A[i][j];

		}
	}
	//// j0 j1 j2 j3
	//i0 00 01 02 03
	//i1 10 11 12 13
	//i2 20 21 22 23
	//i3 30 31 32 33

	cout << cnt1 << endl << cnt2; 

return 0;

}