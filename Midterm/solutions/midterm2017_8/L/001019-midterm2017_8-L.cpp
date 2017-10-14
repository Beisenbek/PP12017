#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long a[100001],b[100001],n,k;
    cin>>n;
    for (int i=1;i<=n;++i)
    cin>>a[i];
    cin>>k;
   
    if (k>=0)
    for (int i=1;i<=n;++i)
    {
        if (  (i+k%n)<=n  )
        b[i+k%n]=a[i];
        else
        b[ (i+k)%n]=a[i];
    }
    else
    {
        k=abs(k);
        for (int i=1;i<=n;++i)
        {
            if (  (i-k%n)>=1  )
            b[i-k%n]=a[i];
            else
            b[n+i-k%n]=a[i];
           
           
        }
       
       
       
    }
    for (int i=1;i<=n;++i)
    cout<<b[i]<<" ";
   
}