#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, rw[110], mx=-1, x;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        rw[i]=0;
        for(int j=1; j<=m; j++){
            cin>>x;
            rw[i]+=x;
        }
        mx=max(mx, rw[i]);
    }

    for(int i=1; i<=n; i++){
        if(mx==rw[i]){
            cout<<i;
            break;
        }
    }
    return 0;
}

