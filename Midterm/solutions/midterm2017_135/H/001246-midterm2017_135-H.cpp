#include <iostream>

using namespace std;

int main () {
  
  int n,x;
  cin >>n;

  int a[n]; 
  int k=0;

   for (int i=0; i<=n;i++ ) {
   	cin>>x;
   	if (a[i]==n) {
   		k++;
   	}

   }
   cout <<k;

   return 0;
  }
