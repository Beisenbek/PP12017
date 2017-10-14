#include <iostream>

using namespace std;

int main () {
  
  int n;
  cin >>n;

  if (n%2==1 && n%3==1 && n%5==1 && n%7==1) {
  	cout<<"YES";
  }else {
  	cout<<"NO";
  }
 

  return 0;

}