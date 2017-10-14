#include<bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ll long long
#define pll pair<ll,ll>
#define pii pair<int,int>

const int N = 100100;
const int INF = int(2e9);



int n;


bool check(int x)
{
	int res = 0;
	while(x)
	{
			res += x % 10;
			x -= x % 10;
			x /= 10;
	}
	if(res == n) return 1;
	else return 0;
}

int main()
{

	ios_base :: sync_with_stdio(0);

	string s;
	cin >> s;

	int cnt = 0;
	for(int i = 0;i < s.size();i ++)
	{
		if(s[i] == 'a') ++ cnt;
		if(s[i] == 'e') ++ cnt;
		if(s[i] == 'i') ++ cnt;
		if(s[i] == 'o') ++ cnt;
		if(s[i] == 'u') ++ cnt;
	}

	cout << cnt;
	return 0;
}