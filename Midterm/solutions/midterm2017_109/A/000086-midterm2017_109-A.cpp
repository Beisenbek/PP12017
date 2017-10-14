#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a==1)
	cout<<"NO";
	
	for( int i=2 ; i<a/2 ;i ++){
		if(a % i ==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
	
	
	
	
	
	return 0;
}
