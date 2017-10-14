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

int n, mx = 0, ans, m;
int a[200][200];

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		
		int sum = 0;
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}

		if(sum > mx) {
			mx = sum;
			ans = i;
			cerr << "shit\n" << mx << " " << sum << endl;
		}
	}	

	cout << ans << endl;
	return 0;
}