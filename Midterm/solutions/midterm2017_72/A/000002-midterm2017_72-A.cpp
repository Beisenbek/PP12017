#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i=2;i<n;++i)
	if (n%i==0)
	{
		cout<<"NO";
		return 0;
	}
	
}
