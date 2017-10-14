#include <iostream>
#include <cmath>

using namespace std;
  
  int main () {

   int n;
    
    cin>>n;

   int a[n][n];
   int k=0;
   int m=0;

   for(int i = 0; i < n; i++) {
   	  for (int j =0; j< n; ++j){

   	       if (j==n-i-1) k+= a[i][j];
   	       	
   	  }
   }

for(int i = 0; i < n; i++) {
   	  for (int j =0; j< n; ++j){
        if (i==n-j-1) m+=a[j][i];
   	  	
   	  
   	}

}

cout <<k;
cout<<m;
   	return 0;

   }












  