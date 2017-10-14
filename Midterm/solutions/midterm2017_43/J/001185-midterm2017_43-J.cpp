#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
   
    int a[n];
 
    int index = 0;
    int mx = -1;
 
    for(int i = 0; i < n; ++i){
      int s = 0;
      for(int j = 0; j < m; ++j){
        cin >> a[i];
        s = s + a[i];
      }
     
      if(mx < s){
        mx = s;
        index = i;
      }
    }
 
    cout << index;
 
 
 
    return 0;
}