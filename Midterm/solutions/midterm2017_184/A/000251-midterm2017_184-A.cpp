#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,k=2;
	cin >> n;
	for (int i=1;i<=n;i++) {
		if(n%k==0) {
			cout <<"YES";
		}
		else cout << "NO";

	}
	return 0;
}