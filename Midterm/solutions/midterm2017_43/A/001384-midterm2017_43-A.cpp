#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;

for (int i = 2; i < n - 1; ++i)
{

  if (n % i == i)
{
  cout << "NO";
  }else{
    cout<<"YES";
  }
 }
 
 
    return 0;
}