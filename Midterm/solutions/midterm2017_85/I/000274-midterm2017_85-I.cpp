#include <iostream>
using namespace std;
int main(){
	int n,x=0,y=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>a[i][j];	
		}
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(i==j){
			x=x+a[i][j];
		}
		if((i+j)==n-1){
			y=y+a[i][j];
		}	
		}
		
	}
	cout<<x<<endl;
	cout<<y<<endl;

   





	return 0;
}