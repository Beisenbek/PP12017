#include <iostream>

using namespace std;
int main () {
	
	int N;
	bool isPrime=true;
	cin>>N;
	
	for (int i=1;i<=1000;i++){
		if (N%i==0){
			isPrime=false;
		}
		
	}
	if (isPrime)cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
