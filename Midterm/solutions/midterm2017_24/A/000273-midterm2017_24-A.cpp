#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,k;
	cin>>n;
	int i=2;
	

	while(i<n<=	1000){
		k=n%i;
		if (k==0) {
			cout<<"NO";break;}
			i++;
}
  if (k!=0) {cout<<"YES";}     


	return 0;
}