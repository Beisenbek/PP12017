#include <iostream>
using namespace std;
int main(){
	int n,sum1=0,sum2=0;
	cin>> n;
	int a[100][100];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>> a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		sum1=sum1+a[i][i];
	}
	for (int i=0;i<n;i++){
		sum2=sum2+a[i][n-1-i];
	}
	cout<< sum1<< endl<< sum2;
	return 0;
}