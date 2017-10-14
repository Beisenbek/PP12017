#include<iostream>
using namespace std;
int main()
{
	int i,q=0,n,m;
	
	cin>>n>>m;
	int a[n];
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		a[m]=-1;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
