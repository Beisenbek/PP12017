#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int n, a[101][101], m=0, s=0;
	cin >> n;
	for (int i = 1; i<=n;i++){
		for (int j = 1;j<=n;j++){
			cin >>a[i][j];
			if (i+j == n+1){
				s = s+a[i][j];
			}
			if (i-j == 0){
				m = m+a[i][j];
			}
		}
	}
	cout <<s<<" "<<m;
	return 0;
}
