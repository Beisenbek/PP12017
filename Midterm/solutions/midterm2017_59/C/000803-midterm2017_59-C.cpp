#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string n;
	cin >> n;
	if(isupper(n[0])) {
		cout << n;
		return 0;
	}
	else {
		n[0] = n[0] - 'a' + 'A';
		cout << n;
		return 0;
	}
	
	return 0;
}
