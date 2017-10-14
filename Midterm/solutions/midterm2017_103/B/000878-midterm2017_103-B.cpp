#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	int n1,n2,n3,i;
	cin>>n;
	for(int i=100; i<=999; i++)
	  n1=n/100;
	  n2=n%10;
	  n3=(n/10)%10;
	int sum=n1+n2+n3;
	
	if(sum==n){
		cout<<i<<endl;
	}
	
	
	

	
	
	
	
	
	
	return 0;
	
	
}
