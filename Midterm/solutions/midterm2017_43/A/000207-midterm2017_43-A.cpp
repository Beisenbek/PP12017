#include <iostream>
using namespace std;

int main ()
{

int n;
cin >> n;
for (int i = 1; i < 1000; ++i)
 {
   if((n / i == 1 && n / i == n) && n / i != i)
   	cout << "YES"
   else cout << "NO";}
return 0;
}