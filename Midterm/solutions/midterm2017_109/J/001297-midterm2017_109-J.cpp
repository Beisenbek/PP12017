#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int sum[n];
	int ind=1;
	for(int i=1 ; i<=n ; i++){
		sum[i]=0;
		for( int j=1 ; j<=m ; j++){
			cin>>arr[i][j];
			sum[i]+=arr[i][j];
		}
	}
	int a=0;
	for(int i=1 ; i<=n ; i++){
		if(sum[i]>a){
			a=sum[i];
			ind=i;
		}
	}
	cout<<ind;
	
	
	
	return 0;
}
