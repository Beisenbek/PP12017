#include <iostream>
 
using namespace std;
 
int main(){
 
     freopen("input.txt", "r", stdin);
 
    int n,m;
    cin >> n;

    int a[n][n];
    int i,j;
 
    for(i=0; i<n;++i){
        for(j=0; j<n;++j){
            cin >> a[i][j];
        }   
    }
    
    for(i=0; i<n;++i){
        for(j=n-1; j>-1;--j){
            cout << a[j][i] << " ";   
        }   
        cout << endl;
    }
    



 
 
    return 0;
}