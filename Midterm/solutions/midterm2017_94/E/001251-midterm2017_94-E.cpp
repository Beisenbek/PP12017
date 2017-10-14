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
		for(i=0;i<s.size();i++)
		{
			if(s[i]!=s[(s.size()-1)-i])
			{
				cout<<"no";
		
				break;
			 } 
		}
	}
	cout<<"yes";
	return 0;
}
