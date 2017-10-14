#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,m;
	cin >> n >> m;

	int a[n][m];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			sum=a[i][0];

			}	
		}
		int t=0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
	 t=max(t,a[i][j]);
	}}
	cout<< t;
	return 0;
}