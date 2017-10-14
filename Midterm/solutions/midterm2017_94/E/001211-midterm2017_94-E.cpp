#include<iostream>
using namespace std;
int main()
{
	int i,q=0,n;
	string s;
	cin>>s;
	if(s.size()==1)
	{
		cout<<"yes";
	}
	else
	{
		for(i=0;i<s.size()/2;i++)
		{
			if(s[i]!=s[(s.length()-1)-i])
			{
				cout<<"no";
		
				return 0;
			 } 
		}
	}
	cout<<"yes";
	return 0;
}
