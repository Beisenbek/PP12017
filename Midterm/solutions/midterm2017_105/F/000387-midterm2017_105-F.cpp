#include <iostream>

using namespace std;

int main(){
	int n,m,k=0;

	cin >> n >> m;
	int a[n];
	int i;

	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		if(i==m-1){
			while(i<n-1){
				a[i]=a[i+1];
				i++;
			}
		}
	}
	for(i=0;i<n-1;i++){
		cout << a[i] << " ";
	}

	return 0;
}