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

int n;

int main() {
	
	cin >> n;
	
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";

	return 0;
}

/*
n
y
h
*/