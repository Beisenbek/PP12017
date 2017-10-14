#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	double k;
	cin >> n;
	k=sqrt(n);
	for(int i=0; i<k; i++){
		if(n==1)cout << "NO";
		else if(n%i==0)cout << "NO";
		else cout << "YES";
	}

	
	

	return 0;
}

