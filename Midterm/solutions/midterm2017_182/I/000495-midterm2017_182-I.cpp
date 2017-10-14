#include <iostream>
using namespace std;
int main(){
	int n, s1 = 0, s2 = 0;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			s1 += a[i][i];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i + j == n - 1){
				s2 += a[i][j];
			}
		}
	}
	cout << s1 << endl;
	cout << s2 << endl;
	return 0;
}