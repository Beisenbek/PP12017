#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n;
	cin >> n;

	if((n /= 1) && (n /= n))
		cout << "YES";
	else
		cout << "NO";
	return 0;

}