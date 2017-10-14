#include <iostream>
#include <cmath>
using namespace std;
int main(){
    freopen("input1.txt","r",stdin);
   
    int n,c,d;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n;i++){
    for (int j=0;j<n;j++){
   int c=a[i][j]+a[i+1][j+1]+a[i+2][j+2];
   int d=a[j][i]+a[j+1][i+1]+a[j+2][i+2];
    }
    }
    for(int i=0; i<n;i++){
    for (int j=0;j<n;j++){
      
    }
}
     cout<<c<<endl;
        cout<<d<<endl;
    return 0;
 
}
