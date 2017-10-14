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

int a[100100];

int main()
{

	int n,maxi = -1;
	cin >> n;
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
		if(a[i] > maxi) maxi = a[i];
	}
	int cnt = 0;
	for(int i = 1;i <= n;i ++) if(a[i] == maxi) ++ cnt;
		cout << cnt;
	return 0;
}