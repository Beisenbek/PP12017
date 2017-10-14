#include <iostream>

using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m ;
	int  a[n][m],sum,mx=0;
	for(int i = 0 ;i < n;i++){
		sum = 0;
		for(int  j = 0; j < m;j++){
			cin >> a[i][j];
			sum=  sum +a[i][j];
		}
		if(sum > mx){
			k = i;
			mx = sum;
		}
	}       
	k++;             
	cout << k <<endl; 
 	
	
return 0;

}
