#include <iostream>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxi=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>maxi)
			maxi=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==maxi)
			s++;
	}
	cout<<s;

	return 0;
}