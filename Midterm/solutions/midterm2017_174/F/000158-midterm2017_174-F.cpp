#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (i != k - 1)
            cout << m << " ";
    }
    return 0;
}
