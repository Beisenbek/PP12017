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

int n, l, r;
int a[200], b[200];

int main() {
	cin >> n >> l >> r;	
	for(int i = 1; i <= n; i++) cin >> a[i];

	for(int i = l; i <= r; i++) {
		b[i] = a[r - i + 1];
	}

	for(int i = l; i <= r; i++) {
		a[i] = b[i];
	}

	for(int i = 1; i <= n; i++) cout << a[i] << " ";

	return 0;
}