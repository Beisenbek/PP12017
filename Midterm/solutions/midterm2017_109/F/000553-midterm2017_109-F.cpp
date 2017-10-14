#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	
	for(int i=1 ;i<=n ; i++ ){
		if(i==k)
		continue;
		cout<<i<<" ";
	}
	
	
	
	
	
	return 0;
}
