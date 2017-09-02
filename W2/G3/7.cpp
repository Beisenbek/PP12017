#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a,i;
	cin >> a >> i;

	int t = ((1 << 31) - 1) + (1 << 31);

	int t2 = t << i;

	int r = t2 & a;

	cout << r << endl;

	return 0;
}