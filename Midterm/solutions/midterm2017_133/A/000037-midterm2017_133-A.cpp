#include <iostream>
using namespace std;
int main () {
	
	int n,i;
	bool isPrime=true;
	cin>>n;
	
	for (int i=2;i<=n/2;i++){
		if (n%i==0){
			isPrime=false;
		} 
	}
	 if (isPrime)
	cout<<"YES";
	else 
	cout<<"NO";
	
	return 0;
}
