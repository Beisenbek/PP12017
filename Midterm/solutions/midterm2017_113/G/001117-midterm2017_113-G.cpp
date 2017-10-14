#include <iostream>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	for(int d=1;d<=n;d++){
	if(n%d==0&&n!=1)
		s++;
}
if(s>2)
cout<<"NO";
else cout<<"YES";
	

	return 0;
}