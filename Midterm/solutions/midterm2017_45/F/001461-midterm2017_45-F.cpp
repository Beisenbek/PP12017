#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,a[100],b[100],s=0;
cin>>n;
for (int i=1;i<=n;++i)
{
cin>>a[i];
b[i+1]=a[i];    
}
b[1]=a[n];
for (int i=1;i<=n;++i)
cout<<b[i]<<" ";
}
 