#include <iostream>
using namespace std;
int main(){
	int n,p,z,m;
    cin>>n;
    
	for (int i=1;i<=n;i++){
		if(i<=999 && i>99)
		p=i%100;
		z=i/100;
		m=(i/10)%10;
		if (p+z+m==n){
			cout<<p<<z<<m;
		}}
	}
