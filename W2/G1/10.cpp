#include <iostream>
#include <bitset>

using namespace std;


int main(){

	int x,i;

	cin >> x >> i;

	int t = (1 << 31) - 1 + (1 << 31);

	int t2 = (t << i);

	bitset<32> y(t2);

	int a = t2 & x;

	//cout << y << endl;

	cout << a << endl;

	return 0;
}