#include <iostream>
using namespace std;
int main(){
	int n,i,q=0;
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0) q++;
	}
	if(q==2) cout<<"YES";
	else cout<<"NO";


	return 0;
}
