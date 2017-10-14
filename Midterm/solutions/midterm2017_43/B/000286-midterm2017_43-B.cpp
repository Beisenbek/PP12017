#include <iostream>
using namespace std;

int main ()
{

int n;
cin >> n;
int a[n];
for (int i = 0; i <n; ++i)
{
	cin >> a[i];
	for (int j = 0; j < m; ++j)
 {
  
   
  a[j] = a[i] - j;
}
}

for (int i = 0; i <n; ++i)
{
	
	for (int j = 0; j < m; ++j)
 {
  

  cout << a[j];
}
}


return 0;
}