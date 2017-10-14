#include<iostream>

#include<string>

using namespace std;
int main()
{
	int n,a[1234],k,e,u;
	cin>>n>>k;
	for (int i=1;i<=n;++i)
	cin>>a[i];
	for (int i=1;i<=n;++i)
	{
		if (i==k)
		continue;
		else
		cout<<a[i]<<" ";
		
		
	}
	
}
