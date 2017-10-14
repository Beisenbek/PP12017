#include <iostream>

using namespace std;

int main()
{
	int n;

	cin>>n;

	int a[n][n];

	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}


	int sumd=0, sumad=0;

	for(int k=0;k<n;k++)
	{
		sumd = sumd+a[k][k];
		sumad = sumad+a[n-1-k][k];
	}


	cout<<sumd<<endl;
	cout<<sumad<<endl;

	return 0;
}
