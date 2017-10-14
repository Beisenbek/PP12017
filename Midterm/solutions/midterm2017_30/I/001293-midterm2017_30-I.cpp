#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,s=0,d=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==n-i-1){
				s+=a[i][j];
			}
			if(i==n-1-j){
				d+=a[i][j];
			}
		}
	}
	cout<<s<<endl;
	cout<<d;
}