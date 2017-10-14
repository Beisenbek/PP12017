#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= min(n, 9); i++)
        for (int j = 0; j <= min(n, 9); j++)
            for (int k = 0; k <= min(n, 9); k++)
                if (i + j + k == n)
                    cout << i << j << k << endl;
    return 0;
}
