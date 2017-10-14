#include <iostream>
#include <cmath>

using namespace std;

int main(){

	
	int n;
	cin >> n ;

	int a[n][n];


	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];						
		}
	}
	 cout <<a[0][0]+a[1][1]+a[2][2]<< " " <<a[0][1]+a[1][1]+a[2][1];
	
	
	return 0;
	}