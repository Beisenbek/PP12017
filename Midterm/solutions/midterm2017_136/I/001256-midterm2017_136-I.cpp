#include <iostream>
#include <cmath>
using namespace std;
int main (){

	int n, r1, r2;
	cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
    	for (int j = 0; j < n; j++){
    		cin >> a[i][j];
    	}
    }

    for (int i = 0; i < n; i++){
    	for (int j = 0; j < n; j++){
    		r1 = a[i][j] + a[i+1][j+1];
    		r2 = a[i][n - 1 - i] + a[i+1][n - 1 - i + 1];
    		cout << r1 << "\n" << r2;
    	}
    }

    return 0;
}



