#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <iomanip>
#include <cassert>
#include <cstring>

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define pb push_back
#define mp make_pair
#define endl "\n"
#define rep(i,x,y) for(int i = x; i <= y; ++i)
#define repr(i,x,y) for(int i = x; i >= y; --i)
#define y1 wearsdfasdf
#define fi first
#define se second

typedef long long ll;

const int N = (int)(5e6) + 322;
const ll INF = (ll)(1e9);
const double eps = (1e-9);

using namespace std;

int n, a[111][111], pos, l, r, cnt[N], sum, sum1, m;

vector <pair <int, int> > v;

int main () {
  cin >> n;
  rep(i, 1, n) {
    rep(j, 1, n) {
      cin >> a[i][j];
    }
  }
  rep(j, 1, n) {
    repr(i, n, 1) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
  return 0;
}
