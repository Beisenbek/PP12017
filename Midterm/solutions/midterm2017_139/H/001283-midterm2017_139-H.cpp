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
int mx, n, cnt;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		if(k > mx) {
			mx = k;
			cnt = 1;
		} else if(k == mx) cnt++;
	}

	cout << cnt << endl;

	return 0;
}