#include<iostream>
using namespace std;
int main()
{
    int m,n,m1,n1,s,a[100][100];
    cin>>m>>n;
    for (int i=1;i<=m;++i)
    for (int j=1;j<=n;++j)
        cin>>a[i][j];
    cout<<n<<" "<<m<<endl;
    for (int i=1;i<=n;++i)
    {
        for (int j=m;j>=1;--j)
            cout<<a[j][i]<<" ";
 
        cout<<endl;
 
    }  
 
}
 

