#include <iostream>
 
using namespace std;
 
int main(){
 
    
 
    int n,m=1;
    cin >> n;

    int a[n][n];
    int i,j;
 
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
 
    int k = 0;

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(i==j){
                k=k+a[i][j];
               
            }
        }
    }
    cout << k;

 
    return 0;
}