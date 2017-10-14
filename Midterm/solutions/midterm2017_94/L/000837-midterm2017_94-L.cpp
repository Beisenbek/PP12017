#include<iostream>
using namespace std;
int main()
{
	int b[111],i,q=-1,n,m,ans=0,l=0,r=0,j,ii,a[111][111];
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>0) b[i]++;
			
		}
		if(b[i]>q) 
			{q=b[i];
			ii=i;}
	}
	for(i=1;i<=n;i++)
	{
		if(q==b[i]) ans++;
	
	}
	if(ans==n)
	{
		cout<<"Numbers are equal";
	}
	else cout<<ii;
	return 0;
}
