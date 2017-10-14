#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int n;
	cin>>n;
	if (n%n==0  && n%1==0){
		cout<<"YES";
	}
	else if (n==1){
		cout<<"NO";
	}
	else {
		cout<<"NO";
	}


	return 0;
}