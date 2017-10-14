#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;
int k = 0 ;
int t = 0;
	int A[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			 cin >> A[i][j];
			 if ( i + j == n-1)
			 	 t+= A[i][j];
			 if ( i == j)
			 	 k+= A[i][j];
		}
	}
cout << t << endl << k ;}