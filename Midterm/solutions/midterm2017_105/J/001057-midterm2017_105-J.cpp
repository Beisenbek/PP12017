#include <iostream>
 
using namespace std;
 
int main(){
 
    freopen("input.txt", "r", stdin);
 
    int n,m;
    cin >> n >> m;

    int a[n+1][m+1];
    int i,j;
 
    for(i=1; i<=n;++i){
        for(j=1; j<=m;++j){
            cin >> a[i][j];
        }   
    }
    int b[n+1];
    int max=0;
    for(i=1; i<=n;++i){
        max=0;
        for(j=1; j<=m;++j){
            max=max+a[i][j];   
        }   
        b[i]=max;
    }
    max=0;
    int s;
    for(i=1;i<=n;i++){
        if(b[i]>max){
            s=i;
            max=b[i];
        }
    }

    cout << s;

 
 
    return 0;
}