#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	int n,m;
	cin >> n >> m;

	int a[n][m];

	int mb = -1;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
			if(mb < a[i][j]){
				mb = a[i][j];
			}
		}
	}
	

	cout << mb << endl;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(mb == a[i][j]){
				cout << i << " " << j << endl;
				return 0;
			}	
		}
	}
	
	
	return 0;
}