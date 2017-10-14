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
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 100;i <= 999;i ++)
	{
		if(check(i)) cout << i << "\n";
	}

	return 0;
}