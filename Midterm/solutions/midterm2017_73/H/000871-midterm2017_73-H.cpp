#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[1232],l,r,maxx,s=0;
	cin>>n;
	for (int i=1;i<=n;++i)
	cin>>a[i];
	maxx=a[1];
	for (int i=1;i<=n;++i)
	maxx=max(maxx,a[i])	;
	for (int i=1;i<=n;++i)
	if (maxx==a[i])
	s++;
	cout<<s;
}
