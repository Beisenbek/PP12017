#include<iostream>
using namespace std;
int main()
{
	int i,q=-1,n,m,ans=0,l=0,r=0,j,ii,a[111][111];
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>q)
			{
			 	q=a[i][j];
			 	ii=i;
			 }
		}
	}
	cout<<ii;
	
	return 0;
}
