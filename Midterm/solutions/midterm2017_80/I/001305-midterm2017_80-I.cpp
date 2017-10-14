#include <iostream>
#include <cmath>

using namespace std;

int main(){

   int n , k , m;
   cin >> n;
   int a[n][n];

   for(int i = 0; i < n; i++)
      for(int j = 0; j < n ; j++)
      {
         cin >> a[i][j];
      }
      for(int i = 0; i < n - 1; i++)
      for(int j = 0; j < n - 1 ; j++)
      {
          k = a[i][i] + a[i+1][i+1] + 1;
          m = a[i][n-i] + a[i+1][n-i-1] + 1;
      }
      cout << k << " " << m;


	return 0;
}