#include <iostream>

using namespace std;

int main()
{
    int n, l, r, k = 0;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (l != r)
    for (int i = l - 1; i < (l + r) / 2; i++)
    {
        swap(a[i], a[r - k - 1]);
        k++;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
