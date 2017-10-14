#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[101], x=0, mx=-1;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mx=max(mx, a[i]);
    }
    for(int i=0; i<n; i++){
        if(mx==a[i])x++;
    }
    cout<<x;
    return 0;
}
