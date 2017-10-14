#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int n,k = 0;

	cin >> n;

	for(int i = 1; i <= n; ++i){
		if(n%i == 0){
			k = k + 1;
		}
	}
	if (k == 2) cout << "YES";
	else cout << "NO";
	return 0;
}