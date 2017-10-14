#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i; i<=n; i++){
		if ((n%i==0)&&(i=2)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
}


	return 0;
}