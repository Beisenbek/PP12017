#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
	int x;

	cin >> x;

	bitset<32> b(x);

	cout << b << endl;

	return 0;
}
