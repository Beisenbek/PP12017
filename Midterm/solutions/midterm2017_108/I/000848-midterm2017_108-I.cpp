#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n][n];
	int cnt1 =0, cnt2 = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i == j){
				cnt1+=a[i][j];
			}if ( i + j == n-1){
				cnt2+=a[i][j];
			}
		}
	}
	cout << cnt1 << endl<< cnt2;
	return 0;
} 