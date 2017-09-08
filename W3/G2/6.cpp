#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	int A,i;
	cin >> A >> i;

	bitset<32> b(A);
	cout << b << endl;

	int B = A << i;
	bitset<32> b2(B);
	cout << b2 << endl;

	int C = (1 << 31) - 1 + (1 << 31);
	bitset<32> b3(C);
	cout << b3 << endl;
	
	return 0;
}
