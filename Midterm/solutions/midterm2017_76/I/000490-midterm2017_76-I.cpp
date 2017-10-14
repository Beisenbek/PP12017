#include <iostream>

using namespace std;

int main(){
	int n;
     
     cin >> n;

     int a[n][n];
     int sum = 0;
     int sum2 = 0;
     for( int i = 0 ;i < n;i++){
     	for( int j = 0; j < n;j++){
     		cin >> a[i][j];
     		if(i == j){
     			sum += a[i][j];
     		}
     	}
     }
     cout << sum << " ";
     for(int i = 0;i < n;i++){
     	for(int j = 0 ;j < n;j++){
              if(i + j + 1  == n){
              	sum2 += a[i][j];
              }
     	}
     }
     cout << sum2;
	 return 0;
	}
 

 

