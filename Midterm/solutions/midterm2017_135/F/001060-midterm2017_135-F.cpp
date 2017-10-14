#include <iostream>
#include <cmath>

using namespace std;

int main () {
  
  int n, k;
  cin >>n;

  int a[n];

  for (int i=0; i<=n; i++) {
  	cin>>a[i];
  	if (a[i]==k) {
  		continue;
  	}
  	
  }
  cout <<a[n]<<" ";

  return 0;
 }