#include <iostream>
#include <cmath>

using namespace std;

int main(){

	string a;
	cin>>a;
	
		if ( a[0]>97){
			a[0]=a[0] - 32;
			cout<<a;

		}
	else {
		cout<<a;
	}
	return 0;
		}