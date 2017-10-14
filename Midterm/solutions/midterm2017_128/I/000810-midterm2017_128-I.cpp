#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for (int i=0; i<n; i++)
	{
		for (int k=0; k<n; k++)
		{
			cin >> a[i][k];
		}
	}
	int h=0,j=0;
	for (int i=0; i<n; i++)
	{
		h+=a[i][i];
		j+=a[i][n-i-1];
	}
	cout << h << " " << j;
	return 0;
}
/*

*/