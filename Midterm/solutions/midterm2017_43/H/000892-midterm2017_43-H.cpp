
#include <iostream>

using namespace std;
int main(){
int x, count = 0;
  cin >> x;
  int max = x;
  int a[x];

  for (int i = 0; i < x; ++i)
  {
    cin >> a[i];
  }
  for(int i = 0 , i < x , ++i)
  {
    if (i > max)
    {
      max = i;
      count = 1;
    }
    else
      if (i == max)
        count++;
    cin >> x;    
  }
  cout << count;
      	return 0;
}