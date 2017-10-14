#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	double k;
	cin >> n;
	k=sqrt(n);
	k=ceil(k);
	for(int i=2; i<=k; ++i){
		if(n%i==0)cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	
	

	return 0;
}

