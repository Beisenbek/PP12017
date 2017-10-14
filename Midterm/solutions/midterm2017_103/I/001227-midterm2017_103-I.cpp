#include <iostream>

using namespace std;

int main(){
        int n,m,k;
	cin >> n;
	int a[n][n],sum=0,sum2=0,x = n - 1;
	for(int i=0;i <n;i++){
		for(int j = 0;j < n;j++){
		 	cin >> a[i][j];
			if(i == j) sum = sum + a[i][j];
			if(i == x) sum2 = sum2 + a[i][j];
		}
		x=x-1;
	}
	cout << sum2 << " " <<sum;

	
	return 0;
}