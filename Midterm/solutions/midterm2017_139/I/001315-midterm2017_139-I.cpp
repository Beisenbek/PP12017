#include <bits/stdc++.h>

#define ll long long
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define vi vector<int>
#define vl vector<long long>
#define sz size()
#define x first
#define y second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ld long double

using namespace std;
int a[200][200];
int n;
ll ans;

int main() {
	cin >> n;	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	ll ans1 = 0, ans2 = 0;
	for(int i = 1; i <= n; i++){
		ans1 += a[i][i];
		ans2 += a[i][n - i + 1];
	}


	cout << ans1 << endl << ans2 << endl;

	return 0;
}