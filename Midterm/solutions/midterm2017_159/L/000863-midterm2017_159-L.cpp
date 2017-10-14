#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int k=0;
    int mi=0;
    int s=0;
    int ind=0;
    for (int i=1;i<=n;++i){
         for(int j=1; j<=m;++j){
         	cin>>a[i][j];
            if (a[i][j]>0) k++;
         }
       if (k>mi) mi=k;
       k=0;
    }
     for (int i=1;i<=n;++i){
         for(int j=1; j<=m;++j){
            if (a[i][j]>0) k++;
         }
       if (k>=mi) { mi=k;
       	ind=i;
       	s++; }
       	k=0;
    }
    if (s==1) cout<<ind;
    else cout<<"Numbers are equal";

	return 0;
}