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

	int n,l,r;
	vector<int> b;
	cin >> n >> l >> r;
	
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
		if(i >= l && i <= r) b.pb(a[i]);
	}

	reverse(b.begin(),b.end());
	
	for(int i = 1;i < l;i ++)
	{
		cout << a[i] << ' ';
	}
	
	for(int i = 0;i < b.size();i ++) cout << b[i] << " ";
	for(int i = r + 1;i <= n; i++) cout << a[i] << " ";


	return 0;
}