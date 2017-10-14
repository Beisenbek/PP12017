#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
 
   
    int n,m;
    cin >> n >> m;
 
    int a[n][m];
    int mx[n];
    int indexm = 0;
    int sum[n];
 
    for(int i = 1; i <= n; ++i){
        sum[i] = 0;
        mx[i] = 0;
 
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
            sum[i] += a[i][j];
            mx[i] = sum[i];
        }
 
        if((mx[indexm] < mx[i]) || (mx[indexm] == mx[i] && sum[indexm] < sum[i])){
            indexm = i;

        }
 
    }
 
    cout << indexm;
   
    return 0;
}