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
            if (a[i][j] > 0)
                b[i]++;
        }
    int ans = 1, k = b[0];
    bool t = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != b[i + 1])
            t = 0;
    }
    if (t)
    {
        cout << "Numbers are equal";
        return 0;
    }
    for (int i = 0; i < n; i++)
        if (k < b[i])
        {
            k = b[i];
            ans = i + 1;
        }
    cout << ans;
    return 0;
}
