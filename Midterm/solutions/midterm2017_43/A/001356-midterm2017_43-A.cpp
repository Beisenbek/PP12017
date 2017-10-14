#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;

for (int i = 1; i < 1000; ++i)
{

  if (n % i == 1 && n % i == n)
{
  cout << "YES";
  }else{
    cout<<"NO";
  }
 }
 
 
    return 0;
}