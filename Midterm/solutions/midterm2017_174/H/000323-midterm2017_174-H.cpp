#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0, mx = -1000000000;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
            cnt++;
    }
    cout << cnt;
    return 0;
}
