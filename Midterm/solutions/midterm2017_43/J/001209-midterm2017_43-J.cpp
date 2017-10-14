#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n,m;
    cin >> n>>m;
   int a[n][m];
 
    int index = 0;
    int mx = -1;
 
    for(int i = 0; i < n; ++i){
      int s = 0;
      for(int j = 0; j < m; ++j){
        cin >> a[i][j];
        s = s + a[i][j];
      }
     
      if(mx < s){
        mx = s;
        index = i;
      }
    }
 
    cout << index;
 
 
 
    return 0;
}