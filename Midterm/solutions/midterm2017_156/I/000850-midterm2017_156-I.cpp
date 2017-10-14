#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	int sum1 = 0;
	int sum2 = 0;

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
			if(i==j) sum1 += a[i][j];
			if(i==n-j-1) sum2 += a[i][j];
		}
	}
	cout << sum1 << endl << sum2;
}