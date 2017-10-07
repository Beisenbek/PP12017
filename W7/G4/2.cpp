#include <iostream>
/*

0 1 2 

0 0 1 \0  
0 1 2 \1
1 2 2 \2

3

1 2 = 3
2 1 = 3
2 2 = 4




nxn

*/

using namespace std;

int main(){
  
  int n;
  cin >> n;
  
  int a[n][n];
  
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
   		a[i][j] = 0;
      	if(j == n - 1 -i){
      		a[i][j] = 1;
        }else if(i + j >= n){
        	a[i][j] = 2;
        }
    }
  }
  
  
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
    	cout << a[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}
