#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int a[1000];
	int n,k;
	cin>>n>>k;
	for (int i = 0; i< n;i++){
		cin>>a[i];
	}
	for (int i = 0; i < n; i++){
		if (i == (k-1)){
			a[i]=false;
		}
		cout<<a[i]<<" ";
	}
	return 0;
}