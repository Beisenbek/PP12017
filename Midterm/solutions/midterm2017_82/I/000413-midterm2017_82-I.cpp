#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, c1=0, c2=0, a[110][110];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)c1+=a[i][j];
            if(i==n-j+1)c2+=a[i][j];
        }
    }
    cout<<c1<<" "<<c2;
    return 0;
}

