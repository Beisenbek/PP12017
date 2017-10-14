#include <iostream>
using namespace std;
int main(){
	int n,g;
	cin>>n>>g;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i!=g-1)
			cout<<a[i]<<" ";
		

	}
	


	return 0;
}