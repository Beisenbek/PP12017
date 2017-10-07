#include <iostream>
/*
-0-1-2-3-4-5--------->0
-0-1-2-3-4-5--------->1
-0-1-2-3-4-5--------->2
-0-1-2-3-4-5--------->3
-0-1-2-3-4-5--------->4
-0-1-2-3-4-5--------->5
  
r c
0 5 = 5 => n - 1
1 4
2 3
3 2
4 1
5 0
  
i, n - 1 - i
  
i,i


0 0 0 /0 
1 1 1 /1
2 2 2 /2
*/

/*
0 0 0 1 
0 0 1 2 
0 1 2 2 
1 2 2 2

nxn

*/

using namespace std;

int main(){
  
  int n;
  cin >> n;
  
  int a[n][n];
  
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
   		a[i][j] = i;
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
