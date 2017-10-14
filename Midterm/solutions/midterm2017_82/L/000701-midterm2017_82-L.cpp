#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a[110][110], rw[110], x, c=0, mx=-1, mn=101000;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        rw[i]=0;
        c=0;
        for(int j=1; j<=m; j++){
            cin>>x;
            if(x>0){c++;}
        }
        rw[i]=c;
        mx=max(mx, c);
        mn=min(mn, c);
    }
    if(mx==mn)
    {
        cout<<"Numbers are equal";
        return 0;
    }
    for(int i=1; i<=n; i++){
        if(mx==rw[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}
