#include <iostream>

using namespace std;

int main(){

	int n,m;

	cin >> n,m;

	int A[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}

	int maxi;

	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			sum += A[i][j];
		}
			if(i==0)
				maxi=sum;
			else{
				if(sum>maxi)
					maxi = sum;
			}
		}
	
	return 0;
}