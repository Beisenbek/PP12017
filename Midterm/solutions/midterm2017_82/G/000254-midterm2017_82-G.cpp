#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, a[101], x;
    cin>>n>>l>>r;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverse(a+l-1, a+r);
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
