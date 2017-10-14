#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	if(n == 1 || n == 3 || n == 5 || n == 7) {
		cout << "YES";
		return 0;
	}

	else if((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0))
		cout << "NO";
	else 
		cout << "YES";
	return 0;
}
