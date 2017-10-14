#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	int n=s.size()-1;
	for (int i=0;i<=n/2;++i)
	if (s[i]!=s[n])
	{
		cout<<"no";
		return 0;
	}
	cout<<"yes";
	
}
