#include <iostream>

using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = l - 1; i < (l + r) / 2; i++)
        swap(a[i], a[(l + r) / 2 - i + 1]);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}