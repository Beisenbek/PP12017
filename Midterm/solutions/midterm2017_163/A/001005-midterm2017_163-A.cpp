#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
    int n;
    bool x=true;
    cin>>n;
    if(n==1){cout<<"NO";return 0;}
    for(int i=2; i*i<=n; i++){
        if(n%i==0){x=false;break;}
    }
    if(x)cout<<"YES";
    else cout<<"NO";
    return 0;
}