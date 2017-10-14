#include <iostream>
using namespace std;
 int main(){
    int n,m;
    cin >> n >> m;
    a[n][m];
    int sum[n];
    int S=-1;
    int indi;
    for (int i=0;i<n;i++){
    	sum[i]=0;
    	for(int j=0;j<n;j++){
    		cin >> a[i][j];
    		sum[i] += a[i][j];
    	}
    	if(sum[i]>S){
    		S=sum[i];
    		indi=i;
    	}
    } 	
    cout << indi;
 	return 0;
 }