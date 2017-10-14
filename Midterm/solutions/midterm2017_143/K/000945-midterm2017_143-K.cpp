#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <fstream>
#define endl "\n"
#define c0 ios_base :: sync_with_stdio(0); cin.tie (0);
#define s second
#define f first
#define ll long long
#define ull unsigned ll
using namespace std;

const int MaxN = 1000 + 17;
const ll INF = 1e18 + 17;
const int MOD = 1e9 + 7;
const double eps = 1e-3;
const double pi = 3.14159265359;

string s;
int a[MaxN][MaxN];
int main()
{
    #ifdef DEBUG
        freopen (".in", "r", stdin);
        freopen (".out", "w", stdout);
    #endif
    int n, m;
    cin >> n;
    int x = 0, y = 0;
    for (int i = 1; i <= n; ++ i)
    {
        for (int j = 1; j <= n; ++ j)
            cin >> a[i][j];
    }
    for (int j = 1; j <= n; ++ j){
        
    for (int i = n; i >= 1; -- i)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
    return 0;
}


