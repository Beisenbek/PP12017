#include <iostream>

using namespace std;

int main(){

	int n,m;

	cin >> n >> m;

	int A[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(A[i][j]==A[0][j] && A[i][j]==A[i][0]){
				A[i][j]=1;
			}
			else 
				A[i][j]=A[i-1][j]+A[i][j-1];
			cout << A[i][j] << " ";
		}
	}	
	cout << endl;


	return 0;
}