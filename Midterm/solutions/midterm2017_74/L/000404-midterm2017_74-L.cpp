
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
    int a[700][700],b[700],c[700];
int main(){
    int n,m,s=0,k,l=-999999;
    cin>>n>>m;
 
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
        
        }
    }
 
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        b[i]=max(b[i],a[i][j]);
        s=s+a[i][j];
        c[i]=s;
        
    }
    s=0;
}

for(int i=0;i<n;i++)
{
    l=max(l,c[i]);
}
for(int i=0;i<n;i++){
if(l==c[i])
 {
cout<<i;
return 0;
}
}
}