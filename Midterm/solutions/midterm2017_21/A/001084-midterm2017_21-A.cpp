#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int prime =2;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			prime++;
		}
	}
	if(prime>2)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

	return 0;
}