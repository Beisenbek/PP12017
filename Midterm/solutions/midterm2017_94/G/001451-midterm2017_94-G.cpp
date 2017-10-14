#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,q=0,n,l,r,a[111];
	cin>>n>>l>>r;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	reverse(a+l,a+r+1);
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
