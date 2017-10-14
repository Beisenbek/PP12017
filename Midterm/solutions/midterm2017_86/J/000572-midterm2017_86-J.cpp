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
int cnt = 0;
int main()
{


	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		for(int j = 1;j <= n;j ++)
		{
			int x;
			cin >> x;
			cnt[i] += x;
		}
	}

	for(int i = 1;i <= n;i ++)
	{
		if(cnt[i] > maxi) maxi = cnt[i];
	}
	for(int i = 1;i <= n;i ++)
	{
		if(cnt[i] == maxi)
		{
			cout << i ;
			exit(0);
		}
	}

	return 0;
}