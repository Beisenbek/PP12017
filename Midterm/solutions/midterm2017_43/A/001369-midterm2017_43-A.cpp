#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;

for (int i = 2; i < n; ++i)
{

  if (n / i == 1)
{
  cout << "YES";
  }else{
    cout<<"NO";
  }
 }
 
 
    return 0;
}