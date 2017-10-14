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
	if(a[i][j]+a[j][i]+a[i][j]==15)
		cout << "15";
	
		}
	}

	
	return 0;
	}