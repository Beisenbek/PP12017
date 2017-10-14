#include<iostream>
using namespace std;
int main()
{
	int i,q=-1,n,m,ans=0,l=0,r=0,j;
	
	cin>>n;
	int a[n][n];
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			}
		}
	
	if(n%2==0)
	{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j){
				//cout<<a[i][j]<<endl;
				l=l+a[i][j];
			}
			else if(i+j==n+1)
			{
				//cout<<a[i][j]<<endl;
				r=r+a[i][j];
			}
		}
	}
	cout<<l<<endl<<r;
	}
	else
	{
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j){
				//cout<<a[i][j]<<endl;
				l=l+a[i][j];
			}
			else if(i+j==n+1)
			{
				//cout<<a[i][j]<<endl;
				r=r+a[i][j];
			}
		}
	}
	cout<<l<<endl<<r+a[(n+1)/2][(n+1)/2];
	}

	
	return 0;
}
