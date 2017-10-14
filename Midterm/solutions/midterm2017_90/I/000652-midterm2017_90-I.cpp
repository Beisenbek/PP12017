#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; ++i){
    for( int j = 0; j < n; ++j){
      cin >> a[i][j];
    }
  }
int sum = 0;
int sum2 = 0;

for( int i =0; i < n; i++){
  for(int j = 0; j < n; j++){
    if ( i == j){
      sum = sum + a[i][j];
    }
    else if ( i + j == n - 1){
      sum2 = sum2 + a[i][j];

    }
    }
  }
}
cout << sum << endl;
cout << sum << endl;

return 0;
}
