#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main()
{
	int a=0,x;
	string s;
	cin>>s;
	for (int i=0;i<s.size();++i)
	if (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
	a++;
	cout<<a;

	
}
