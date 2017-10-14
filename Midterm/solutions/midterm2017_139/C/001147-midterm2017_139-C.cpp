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

	if(s[0] >= 'A' && s[0] <= 'Z') {
		
	} else {
		s[0] = char(s[0] - 'a' + 'A');
	}
	cout << s << endl;

	return 0;
}