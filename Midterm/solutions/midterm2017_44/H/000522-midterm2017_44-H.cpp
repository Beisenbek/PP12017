#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){

  int n;
  cin >> n;
  int a[n]; 

  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  int k = 0;

  for(int i = 0; i < n; ++i){

  if(a[i] = max(a[i],n)) k = k + 1;
} 
  cout << k;

  return 0;
}
