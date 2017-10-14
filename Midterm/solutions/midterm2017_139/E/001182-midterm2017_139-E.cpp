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

int main() {
	string s;
	cin >> s;

	for(int i = 0; i < s.sz; i++) {
		if(s[i] != s[s.sz - 1 - i]) {
			cout << "no\n";
			return 0;
		}
	}
	cout << "yes\n";

	return 0;
}