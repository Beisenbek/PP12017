#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,a[101][101],b[100],s=0,maxx=0,c[100],ind=-1,sum=-1;
    cin>>n>>m;
    for (int i=0;i<n;++i)
    for (int j=0;j<m;++j)
    {
        cin>>a[i][j];
       
    }
    for (int i=0;i<n;++i){
   
    for (int j=0;j<m;++j)
    s+=a[i][j];
    b[i]=s;
    s=0;
   
    }
    for (int i=0;i<n;++i){
   
    for (int j=0;j<m;++j)
    maxx=max(maxx,a[i][j]);
   
    }
    for (int i=0;i<n;++i){
   
    for (int j=0;j<m;++j)
    if (a[i][j]==maxx)
    c[i]=1;
    }
   
    for (int i=0;i<n;++i)
    {
        if (c[i]!=1)
        continue;
       
        if (b[i]>sum)
        {
            ind=i;
            sum=b[i];
        }
       
    }
   
   
    cout<<ind;
}
