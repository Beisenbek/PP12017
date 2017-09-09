#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	unsigned long x = (1 << 31) - 1 + (1 << 31);
	
	cout << x << endl;

	cout << INT_MAX << endl;

	return 0;
}
