#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	unsigned long x = (1 << 31) - 1 + (1 << 31);
	
	int i,A;
	cin >> A >> i;

	//bitset<32> bA(A);
	//cout << bA << endl;

	x = (x << i);
	//bitset<32> bx(x);
	//cout << bx << endl;

	int y = A & x;
	//bitset<32> by(y);
	//cout << by << endl;
	cout << y;
	return 0;
}
