#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,m,sum1=0,sum2=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n; i++){
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	}
	for(int i=0;i<n; i++){
		for(int j=0; j<n; j++)
		if(i==j){
			sum1=sum1+a[i][j];
		}
	}
	for(int i=0;i<n; i++){
		for(int j=0; j<n; j++)
		if(i+j==n-1){
			sum2=sum2+a[i][j];
		}
	}
	cout<<sum1<<endl<<sum2;
	return 0;
}