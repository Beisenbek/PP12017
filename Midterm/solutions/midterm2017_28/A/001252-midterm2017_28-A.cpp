#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

    cin >> n;

    n != 1
    
  for(i = 2; i <= n / 2;  ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "YES";
  else
      cout << "NO";

  return 0;
}
