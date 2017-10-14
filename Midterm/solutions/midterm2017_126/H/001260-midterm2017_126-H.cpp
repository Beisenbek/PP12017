#include <iostream>
#include <cmath>

using namespace std;

int main(){ 


  int x;
  cin >> x;
  int sum = 0;
  if (x == 0)
    cin >> x;
  while (x)
  {
    sum += x;
    cin >> x;
    if (x == 0)
      cin >> x;
  }
  cout << sum;
  }