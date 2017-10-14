#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[100][100],s=0,k=0;
    cin>>n;
    for (int i=1;i<=n;++i)
      for (int j=1;j<=n;++j)
        {
          cin>>a[i][j];
        
    }
    for (int i=1;i<=n;++i)
      for (int j=1;j<=n;++j)
      if (i==j){
      s=s+a[i][j];
    }
    else if (i+j==n+1){
        k=k+a[i][j];
       
    }
    
   
    cout<<s<<endl;
    cout<<k<<endl;
    
    
}