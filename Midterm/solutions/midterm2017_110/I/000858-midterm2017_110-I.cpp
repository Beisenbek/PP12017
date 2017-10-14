#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n,s1=0,s2=0;
	cin >> n ;
	int A[n][n];
	
	 for(int i=0; i < n; i++){
	 	for( int j=0; j <n; j++){
	 			cin>>A[n][n];
	 		}
	 	}
	 	for(int i=0; i < n; i++){
	 	for( int j=0; j <n; j++){
	 		if(i==j){
	 			s1++;
		 		}
		 	}
			}
	 			 for(int i=0; i < n; i++){
	 	for( int j=0; j <n; j++){
	 		if(i+j==n-1){
	 			s2++;
	 		}
		 	}
		 }
		 cout << s1 << endl << s2 << endl;


	 		





return 0;
} 
