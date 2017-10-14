#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;

	if (a % 2 == 0)
		cout << "NO";
	else if (a % 2 != 0)
		cout << "YES";

	return 0;
}