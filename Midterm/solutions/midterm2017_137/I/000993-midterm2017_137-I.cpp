#include <iostream>
#include <cmath>

using namespace std;

int main () {
	freopen("input.txt", "r", stdin); 
	int n;
	cin >> n;
	 int A[n][n];
	 int m,k;

	 for(int i=0; i<n; i++){
	 	for (int j=0; j<n; j++){
	 		cin >> A[i][j];   
	 	  if(i+j)
	 	  m=i+j;
	 	  
	 	 if (A[i][j]==A[j][i] )
	      k= i+j;
	 	
	 	}	 	
	 }
	 
     for(int i=0; i<n; i++){
	 for (int j=0; j<n; j++)   
     
  cout << m << endl;
  cout << k << endl;
}
	return 0;
}