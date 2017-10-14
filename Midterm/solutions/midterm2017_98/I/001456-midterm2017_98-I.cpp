#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int A[n][n];
int cnt1 = 0; 
int cnt2 = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			 cin >> A[i][j];
			 if ( i + j == n-1)
			 	 cnt1+= A[i][j];
			 if ( i == j)
			 	 cnt2+= A[i][j];
		}
	}
cout << cnt2 << endl << cnt1 ;}