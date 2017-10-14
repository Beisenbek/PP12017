#include <iostream>

using namespace std;

int main (){
	int a[1000];
	int n,l,k;
	
	cin>>n>>l>>k;
	for (int i=0;i< n; i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		if (i==l-1){
			
			a[i]=a[k-1];
		}
		else if  (i==k-1){
			a[i]=a[l-1];
			
		}

		cout<<a[i]<<" ";
	
}

	return 0;
}
