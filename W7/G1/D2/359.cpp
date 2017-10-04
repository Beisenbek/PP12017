#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,m;

	cin >> n >> m;

	int a[n][m];
	int s[n]; 
	int sm = -1;

	for(int i = 0; i < n; ++i){
		s[i] = -1;
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
			s[i] = max(s[i],a[i][j]);
		}
		sm = max(sm,s[i]);
	}

	int cnt = 0;

	for(int i = 0; i < n; ++i){
		if(sm == s[i]){
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
