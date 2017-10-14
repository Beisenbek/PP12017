#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, sum = 0, sum1 = 0, k = 1;
	cin >> n;
	int array[n][n];
	int m = n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> array[i][j];								
		}
		sum1 = sum1 + array[i][m];	
		sum = sum + array[i][k];	
		cout << endl;
		m--;
		k++;
	}
	
	cout << sum1 << endl << sum;


	return 0;
}
