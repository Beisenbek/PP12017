#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
	int b[1000],n,a[700][701],s1=0,s2=0,m,maxx,d=0,in;
int main()
{

	cin>>n>>m;
	for (int i=1;i<=n;++i)
	for (int j=1;j<=m;++j)
	{
		cin>>a[i][j];
		if (a[i][j]>0)
		b[i]++;	
	}
	maxx=b[1];
	for (int i=1;i<=n;++i)
	maxx=max(maxx,b[i]);
	for (int i=1;i<=n;++i)
	if (maxx==b[i])
	in=i;
	for (int i=1;i<=n;++i)
	{
		if (maxx!=b[i])
		{
			cout<<in;
			return 0;
		}
	}
	
	
	cout<<"Numbers are equal";
	
	
	
	
	
}
 
