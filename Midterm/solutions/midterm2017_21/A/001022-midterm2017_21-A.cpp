#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int prime =0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			prime++;
	}
	if(prime>2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}