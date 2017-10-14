#include <iostream>

using namespace std;

int b[111];

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[i] += a[i][j];
        }
    int ans = 1, k = b[0];
    for (int i = 0; i < n; i++)
        if (k < b[i])
        {
            k = b[i];
            ans = i + 1;
        }
    cout << ans;
    return 0;
}
