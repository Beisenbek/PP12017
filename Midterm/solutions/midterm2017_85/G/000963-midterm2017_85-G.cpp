#include <iostream>
using namespace std;
int main(){
	int n,l,r;
	cin>>n>>l>>r;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0,j=0;i<n,j<n;i++,j++){
		b[i]=a[i];
	}
	for(int i=0,j=0;i<l-1,j<l-1;i++,j++){
		b[j]=a[i];
	}
	for(int i=r-1,j=l-1;i>l,j<r;i--,j++){
		b[j]=a[i];
	}
	    for(int j=0;j<n;j++){
    	cout<<b[j]<<" ";
    }
   





	return 0;
}