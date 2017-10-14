#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, sum = 0, sum1 = 0, k = 1;
	cin >> n;
	int array[n][n];
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> array[i][j];
			if(i == j) sum = sum + array[i][j];									
		}
		cout << endl;
	}

		
	for(int i = n; i >= 1; i--)
	{
		sum1 = sum1 + array[i][k];
		k++;
	}
	
	cout << sum << endl << sum1;


	return 0;
}
