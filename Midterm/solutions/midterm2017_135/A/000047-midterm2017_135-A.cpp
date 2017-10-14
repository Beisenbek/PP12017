#include <iostream>

using namespace std;

int main () {
  
  int n;
  cin >>n;

  if (n%1==0 && n%n==0 && n!=1) {
  	cout<<"YES";
  }else {
  	cout<<"NO";
  }

  return 0;

}