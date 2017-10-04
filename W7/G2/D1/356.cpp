#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,m;

	cin >> n >> m;

	int a[n][m]; 
	int s[n];

	for(int i = 0; i < n; ++i){
		s[i] = 0;
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
			s[i] += a[i][j];
		}
	}

	int msum = s[0];
	int index = 0;

	for(int i = 1; i < n; ++i){
		if(s[i] > msum){
			msum = s[i];
			index = i;
		}
	}

	cout << msum << endl << index;

	return 0;
}
