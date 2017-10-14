#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	bool b = true;
	int sz = s.length() - 1;
	
	for(int i = 0; i <= sz; i++)
	{
		if(s[i] != s[sz-i])
			b = false;		
	}
	if(b)
		cout << "YES";
	else
		cout << "NO"; 
	return 0;
}