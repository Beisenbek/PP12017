#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n][n];
	int b[n][n];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			b[i][j]=a[n-j-1][i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}