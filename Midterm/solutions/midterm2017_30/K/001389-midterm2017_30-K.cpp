#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,s=0,d=0;
	cin>>n;
	int a[n][n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=a[n-1-j][n-1-i];
	}
}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j];
		}
	}

}