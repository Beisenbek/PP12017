#include <iostream>

using namespace std;

int main (){

freopen("input.txt", "r", stdin);

int n;
cin >> n;
int a[n][n];

for (int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		cin >> a[i][j];
	}	
}
int sum = 0;
int sum2 = 0;

for (int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		if (i == j){
			sum = sum + a[i][j];
		}
		if (i + j == n - 1){
			sum2 = sum2 + a[i][j];
		}
	}	
}
cout << sum << endl;
cout << sum2 << endl;

return 0;
}


/*Calculate the total sum of numbers that are located on diagonals in a given square table NxN.*/