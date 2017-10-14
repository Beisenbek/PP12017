
#include <iostream>

using namespace std;
int main(){
int x, count = 0;
  cin >> x;
  int max = -1;
  int a[x];

  for (int i = 0; i < x; ++i)
  {
    cin >> a[i];
  }
  
  for(int i = 0 ; i < x; ++i)
  {
    if (i >= a[i])
    {
      max = i;
      count++;
    }
    cout << count;
   
      	return 0;
}