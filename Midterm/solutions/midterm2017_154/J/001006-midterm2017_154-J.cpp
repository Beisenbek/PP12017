#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m], sum[n];
    int mx1 = -1, mx2 = -1;
    for(int i = 0; i < n; i++)
    {
        sum[i] = 0;
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            sum[i] += arr[i][j];
            if(mx1 < arr[i][j])
            {
                mx1 = arr[i][j];
            }
            cout <<i;               
        }

    }
 
              
    return 0;
}