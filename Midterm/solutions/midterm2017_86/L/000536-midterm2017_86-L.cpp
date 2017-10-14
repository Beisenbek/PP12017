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

int a[2001][2001],sum = 0,sum1 = 0,cnt[200100];
int n,m;
int maxi = -1;
set<int> s;
int main()
{


	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		for(int j = 1;j <= m;j ++)
		{
			cin >> a[i][j];
			if(a[i][j] > 0) cnt[i] ++;
		}
	}

	for(int i = 1;i <= n;i ++)
	{
		s.insert(cnt[i]);
		if(cnt[i] > maxi)
		{
			maxi = cnt[i];
			sum = i;
		}
	}
	if(s.size() == 1)
	{
		cout << "Numbers are equal";
	}
	else cout << sum << " ";

	return 0;
}