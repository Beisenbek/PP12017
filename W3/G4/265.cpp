#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,k,m;

	cin >> k >> m >> n;
	if(k >= n) cout << 2 * m;
	else {
		cout << (2*n/k + ((2*n%k >= 1)?1:0))*m;
	}


	return 0;
}
