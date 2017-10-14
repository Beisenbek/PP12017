#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int s=0;
    int ms=-1;
    int ind=0;
    for (int i=1;i<=n;i++){
         for (int j=1;j<=m;j++){
          cin>>a[i][j];
          s+=a[i][j];
         }
         if (s>ms) { ms=s;
         	ind=i; }
         	s=0;
    }
    cout<<ind;
	return 0;
}