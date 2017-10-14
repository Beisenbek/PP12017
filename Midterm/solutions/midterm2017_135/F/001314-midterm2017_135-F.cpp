#include <iostream>
#include <cmath>

using namespace std;

int main () {
  
  int n;
  int k;
  cin >>n;
  int a[n];

  
    
  for (int i=0; i<n; i++) {
  	cin>>a[i];
  }
  	cin>>k;
  	for (int i=0; i<n; i++)
  	if (a[i]==k) {
  		continue;
  	
  	 cout <<a[i]<<" ";

  	}
  
  return 0;
 }