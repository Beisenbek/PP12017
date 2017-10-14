#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int b[10011],n,a[700][701],s1=0,s2=0,m,maxx;
	cin>>n;
	for (int i=1;i<=n;++i)
	for (int j=1;j<=n;++j)
	{
		cin>>a[i][j];
		
	}
	for (int i=1;i<=n;++i)
	{
		for (int j=n;j>=1;--j)
		cout<<a[j][i]<<' ';
		cout<<endl;
	}
	
}
 
