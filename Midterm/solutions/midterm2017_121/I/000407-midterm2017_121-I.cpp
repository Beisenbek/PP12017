#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int m=0,n,l=0,r;
	cin >> n ;
	int a[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j=0; j<n; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < n; ++i)
	{
		m+=a[i][i];
		l+=a[n-i-1][i];
	}
	cout << m << endl << l;

	return 0;	

	
}