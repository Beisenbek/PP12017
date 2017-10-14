#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int d=2;d<n;d++){
	if(n%d==0&&n!=1){
	cout<<"NO";
return 0;
}
	}

cout<<"YES";
	return 0;
}