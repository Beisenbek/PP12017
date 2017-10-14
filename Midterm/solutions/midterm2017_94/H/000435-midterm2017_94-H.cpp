#include<iostream>
using namespace std;
int main()
{
	int i,q=-1,n,m,ans=0;
	
	cin>>n;
	int a[n];
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>q) q=a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==q) ans++;
	}
	cout<<ans;
	return 0;
}
