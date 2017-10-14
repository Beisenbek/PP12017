#include <iostream>
using namespace std;
int main(){
	int n,c,b;
	cin>>n>>c>>b;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=c;i<=(b+c)/2;i++){
		swap(a[i],a[b]);
		b--;		
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	


	return 0;
}