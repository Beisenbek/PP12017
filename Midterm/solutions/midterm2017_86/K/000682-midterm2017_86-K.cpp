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
int n,a[2001][2001],b[2001][2001];

int main()
{


	cin >> n;
	for(int i = 1;i <= n;i ++)
	{
		for(int j = 1;j <= n;j ++)
			cin >> a[i][j];
	}
	for(int i = 1;i <= n;i ++)
	{
		for(int j = 1;j <= n;j ++)
			b[i][j] = a[j][i] ;
	}

	for(int i = 1; i <= n;i ++)
	{
		for(int j = n;j >= 1;j --)
			cout << b[i][j] << " ";
		cout << "\n";
	}

	return 0;
}