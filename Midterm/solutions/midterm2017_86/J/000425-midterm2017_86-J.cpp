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

int a[2001][2001],sum = 0,sum1 = 0;

int main()
{

	int n,maxi = -1,sum = 0,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		for(int j = 1;j <= m;j ++)
		{
			cin >> a[i][j];
			if(a[i][j] > maxi) maxi = a[i][j];
		}
	}

	for(int i = 1;i <= n;i ++)
	{
		for(int j = 1;j <= m;j ++)
		{
			if(a[i][j] == maxi)
			{
				cout << i;
				exit(0);
			}
		}
	}

	return 0;
}