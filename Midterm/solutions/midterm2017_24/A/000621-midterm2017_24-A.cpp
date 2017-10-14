#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,k;
	cin>>n;
	int i=2;
	if (n==1) cout<<"NO"<<endl; else{
while(i<n){k=n%i;if (k==0){cout<<"NO"<<endl;break;}
i++;}}if (k!=0){cout<<"YES"<<endl;}     
	return 0;
}