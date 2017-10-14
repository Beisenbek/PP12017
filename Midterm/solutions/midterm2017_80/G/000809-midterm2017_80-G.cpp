#include <iostream>
#include <cmath>

using namespace std;

int main(){

   int n ,k , m;
   cin >> n >> k >> m;
   int a[n];
   
   for (int i = 0; i < n; i++)

      cin >> a[i];
 
   for (int i = 0; i < k - 1; i++)
   
      cout << a[i] << " " << a[m -1] << " " ;
   
   for (int i = k ; i < m - 1; i++)
   

      cout << a[i] << " " << a[k-1] << " ";
   
   for (int i = m; i < n ; i++)
   
      cout << a[i] << " " ;




	return 0;
}