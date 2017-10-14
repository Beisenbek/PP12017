#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,k;
	cin>>n;
	int i=2;
	if (n==1) printf("%s\n","NO" ); else{
	while(i<n){
		k=n%i;
		if (k==0){printf("%s\n","NO" );break;}
i++;}}
 if (k!=0){printf("%s\n","YES" );}     
	return 0;
}