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

int get(int a) {
	return a % 10 + (a/10) % 10 + a/100;
}

int main() {
	

	int n;
	cin >> n;


	for(int i = 100; i <= 999; i++) {
		if(get(i) == n) {
			cout << i << endl;
		}
	}

	return 0;
}