#include <iostream>

using namespace std;

int main (){

freopen("input.txt", "r", stdin);

int n;
cin >> n;
int a[n][n];

for (int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		cin >> a[i];
	}	
}
int sum = 0;
for (int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		if (i == j)
			sum = sum + a[i][j];
	}	
}
cout << sum << endl;
	return 0;
}


/*Calculate the total sum of numbers that are located on diagonals in a given square table NxN.*/