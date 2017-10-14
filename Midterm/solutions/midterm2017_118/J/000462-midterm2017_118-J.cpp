#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,a[101][101],b[100],s=0,maxx=0;
    cin>>n>>m;
    for (int i=0;i<n;++i)
    for (int j=0;j<m;++j)
    {
        cin>>a[i][j];
       
    }
    for (int i=0;i<n;++i){
   
    for (int j=0;j<m;++j)
    maxx=max(maxx,a[i][j]);
   
    }
    for (int i=0;i<n;++i){
   
    for (int j=0;j<m;++j)
    if (maxx==a[i][j])
    {
        cout<<i;
        return 0;
    }
    }
   
   
}
 
