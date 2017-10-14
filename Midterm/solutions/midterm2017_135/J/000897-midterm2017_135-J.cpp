#include <iostream>
#include <cmath>

using namespace std;
  
  int main () {
    freopen ("input.txt","r",stdin);

   int n,m;
    
    cin>>n;

   int a[n][m];
   int s[n];
   
   int k=0;


   for(int i = 0; i < n; i++) {

   	  for (int j =0; j< m; ++j){
        cin>>a[i][j];

        s[i] += a[i][j];
      }
    }


  int msum= s[0];
for(int i = 0; i < n; i++) {
   	  for (int j =0; j< m; ++j){
   	  	if (s[i]>msum)
          msum=s[i];
   	  
   	}
  }

    for(int i = 0; i < n; i++) {
      for (int j =0; j< m; ++j){

        if (msum==s[i+1]) {
          k++;
        }
      }

}

cout<<k;
   	return 0;

   }



