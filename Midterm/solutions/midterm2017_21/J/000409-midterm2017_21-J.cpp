#include <iostream>
using namespace std;
int main(){

	int n,m;
	int index;
	int sum[n];
	int k = -1;
	int i,j;
	cin >> n >> m;

	int a[n][m];

	for(i = 0; i < n; i++)
		for(j = 0; j <m; j++){
			cin >> a[i][j];
			sum[i] = sum[i] + a[i][j];
		}

	if( k < a[i][j]){
		k = a[i][j];
		index = i ;
	}

	cout << index << endl;
	
}