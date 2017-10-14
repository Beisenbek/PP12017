#include <iostream>
using namespace std;
int main () {
	
	int a;
	bool isPrime=true;
	cin>>a;
	
	for (int i=2;i<=a/2;i++){
		if (a%i==0){
			isPrime=false;
		}
		
	}
	if (isPrime)cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
