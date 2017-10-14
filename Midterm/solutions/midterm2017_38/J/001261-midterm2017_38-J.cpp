#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m, sum=0;
	cin >> n >> m;

	int a[n][m];

	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; i <= m; ++j){
			sum = a[i][j] + a[i][j+1];
		}
	}
}