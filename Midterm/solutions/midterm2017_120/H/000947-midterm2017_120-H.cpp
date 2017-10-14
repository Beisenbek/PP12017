#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int q=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; // 1 2 3
	}
	int maxi=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>maxi)
		{
			maxi=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==maxi)
			q++;
	}
	cout<<q;
	return 0;
}