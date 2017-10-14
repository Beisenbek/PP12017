#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool x=true;
    int n=s.size();
    for(int i=0; i<=n/2; i++){
        if(s[i]!=s[n-i-1]){x=false;}
        
    }
    if(x)cout<<"YES";
    else cout<<"NO";
    return 0;
}