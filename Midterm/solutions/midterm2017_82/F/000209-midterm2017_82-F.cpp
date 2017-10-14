#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a[1010], x;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(i!=k)cout<<x<<" ";
    }
    return 0;
}
