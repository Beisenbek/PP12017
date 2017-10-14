#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n, a[12345];
	cin >> n;
	for(int i = 100; i < 1000; i++) 
		if(((i / 100) + (i % 10) + (( (i % 100) - (i % 10) ) / 10)) == n)
			cout << i << endl;
	return 0;
}
