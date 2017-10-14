#include<iostream>
using namespace std;
int main()
{
    int m,n,m1,n1,s,a[100][100];
    cin>>m;
    for (int i=1;i<=m;++i)
    for (int j=1;j<=m;++j)
        cin>>a[i][j];
    cout<<n<<" "<<endl;
    for (int i=1;i<=m;++i)
    {
        for (int j=m;j>=1;--j)
            cout<<a[j][i]<<" ";
 
        cout<<endl;
 
    }  
 
}
