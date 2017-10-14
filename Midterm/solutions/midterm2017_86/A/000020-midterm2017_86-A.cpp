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


int main()
{

	ios_base :: sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1;i <= n;i ++)
	{
		if(n % i == 0) ++ cnt;
	}
	if(cnt >= 2) cout << "NO";
	else cout << "YES";

	return 0;
}