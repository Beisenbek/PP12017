#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	int a[n][n];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			//a[i][j] = 0;
			if(j == n - 1 - i){
				a[i][j] = 1;
			}else if (i + j >= n){
				a[i][j] = 2;
			}else{
				a[i][j] = 0;
			}
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}

	
	return 0;
}