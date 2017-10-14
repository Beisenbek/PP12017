#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int k;
	cin >> k;
	if (k=2) {
	cout << "YES";
	for(int i=2;i<k;i++) {
		if (k%i==0) {
			cout << "NO";
		} else {
			cout << "YES";
		} 

		}
		return 0;
	}
}
