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
int n, k;
vi v;
int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		int o;
		cin >> o;
		if(k == i) continue;
		v.pb(o);
	}

	for(int i = 0; i < v.sz; i++) {
		cout << v[i] << " ";
	}

	return 0;
}