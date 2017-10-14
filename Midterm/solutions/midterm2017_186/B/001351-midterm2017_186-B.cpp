#include <iostream>
using namespace std;
int main(){
	int n,p,z,m;
    cin>>n;
    
	for (int i=100;i<=999;i++){
		p=i%100;
		z=i/100;
		m=(i/10)%10;
		if (p+z+m==n){
			cout<<i<<' ';
		}}
	}
