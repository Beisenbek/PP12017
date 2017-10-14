#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main()
{
	string s,e;
	cin>>s;
	
	int n=s.size()-1;
	for (int i=0;i<s.size()/2;++i){
	
	if (s[i]!=s[n])
	{
		cout<<"no";
		return 0;
	}
	
	n--;
	}	
	cout<<"yes";
	
}
