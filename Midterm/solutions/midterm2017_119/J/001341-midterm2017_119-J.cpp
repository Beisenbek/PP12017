#include <iostream>
using namespace std;
int main(){
	int n,m,sum=0,sum2=0,kek=0;
	cin>> n>> m;
	int a[100][100];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>> a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		sum=sum+a[0][i];
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			sum2=sum2+a[i][j];
		}
		if (sum2>sum){
				sum=sum2;
				kek=i;
			}
	}
	cout<< kek;
	return 0;
}