#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int b[1001],n,a[701][700],s1=0,s2=0,m,maxx;
	cin>>n>>m;
	for (int i=1;i<=n;++i)
	for (int j=1;j<=m;++j)
	{
		cin>>a[i][j];
		b[i]+=a[i][j];
	}
	maxx=b[1];
	for (int i=1;i<=n;++i)
	maxx=max(maxx,b[i]);
	for (int i=1;i<=n;++i)
	if (maxx==b[i])
	{
		cout<<i;
		return 0;
	}
	
}
 
