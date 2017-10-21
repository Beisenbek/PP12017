#include <iostream>
#include <stdlib.h> 

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	string l;
	int n;
	string s[100];

	getline(cin,l);

	n = atoi(l.c_str());

	for(int i=0; i<n; i++)
	{
		getline(cin, s[i]);
	}

	for(int i=0; i<n; i++)
	{
		cout<<s[i]<<endl;
	}
}