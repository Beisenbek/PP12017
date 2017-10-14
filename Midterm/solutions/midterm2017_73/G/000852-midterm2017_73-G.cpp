#include<iostream>
#include<cmath>

#include<algorithm>
using namespace std;
int main()
{
	int n,a[1000],l,r;
	cin>>n>>l>>r;
	for (int i=1;i<=n;++i)
	cin>>a[i];
	reverse(a+l,a+r+1);
	for (int i=1;i<=n;++i)
	cout<<a[i]<<" ";
	
}
