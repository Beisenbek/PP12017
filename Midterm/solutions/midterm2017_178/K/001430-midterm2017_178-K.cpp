#include <iostream> 
#include <cmath>
using namespace std; 

int main(){


  
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
      cin >> a[i][j];
    for(int i = 0; i < n; i += 2){
    	if((i+1) == n){
    		cout << a[i] << " ";
    		break;
    	}
   swap(a[i], a[i+1]);
   cout << a[i][j] << " " << a[i+1][j+1] << " ";
    }




	return 0;
}
