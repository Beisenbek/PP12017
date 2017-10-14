#include<iostream>
using namespace std;
int main()
{
	int i,q=0,n;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++) 
	{
		n=(s.size()+1)/2;
		if(s[n+i]==s[n-i]) q++;
	}
	if(s.size()%2==0)
	{
			if(q==n) cout<<"YES";
		else cout<<"NO";
	}
	else{
	if(q==n-1) cout<<"YES";
	else cout<<"NO";}
	
	return 0;
}
