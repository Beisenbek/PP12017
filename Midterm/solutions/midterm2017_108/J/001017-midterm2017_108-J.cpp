#include <iostream>
using namespace std;

int main(){
	int n,m,sum=0,imax,max=-1;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n ; i++){
		for (int j = 0; j < m ; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			sum+=a[i][j];
			
		}
		if (sum > max){
			max = sum;
			imax = i;

		}
		sum = 0;
		
	}
	cout << imax+1;
	return 0;
}
