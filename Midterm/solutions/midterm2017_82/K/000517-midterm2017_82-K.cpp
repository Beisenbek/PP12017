#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[30][30];
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    for(int j=1; j<=n; j++){
        for(int i=n; i>0; i--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
[3 1] [2 1] [1 1]
[3 2] [2 2] [1 2]
[3 3] [2 3] [1 3]
*/