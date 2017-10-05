#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	int n;
	cin >> n;

	int a[n][n];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			a[i][j] = (i+1) * (j+1);
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j] << "\t";
		}
		cout << endl << endl;
	}

	
	return 0;
}