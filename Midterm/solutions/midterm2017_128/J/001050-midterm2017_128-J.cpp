#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	int r,c;
	cin >> r >> c;
	int a[r][c];
	int sum=0;
	int x=200000000;
	int ans;
	int i;
	for (i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cin >> a[i][j];
			sum+=a[i][j];
		}
		if (sum<=x)
		{
			if (sum!=x)
				ans=i;
			x=sum;
			

		}
	}
	cout << i-1 << endl;

	return 0;

}
/*

*/