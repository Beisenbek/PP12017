#include <iostream>
#include <cmath>

using namespace std;

int main(){
int cntr=0;
	string a;
	cin>>a;
	for (int i=cntr;i<100;i++){
		if (a=="a" || a=="e" || a=="i" || a=="o" || a=="u")
			cntr++;		
		
	}
	cout<<cntr;
	return 0;
		}