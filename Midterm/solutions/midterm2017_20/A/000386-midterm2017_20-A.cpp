#include <iostream>

using namespace std;


int main(){
	
	int n;

	cin>>n;

	int a,b;

	n=a*b;
	
	if(n%a==0 || n%b==0) cout<<"NO";
	else cout<<"YES";

  return 0;
}