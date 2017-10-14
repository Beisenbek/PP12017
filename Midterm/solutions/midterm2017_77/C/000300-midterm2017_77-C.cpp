#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	char c = s[0];
	if(c >= 65 && c <= 97)
		cout << s;
	else
	{       
		s[0] = c - 32;
		cout << s;
	}
	
	return 0;
}