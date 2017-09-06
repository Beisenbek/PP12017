#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
	int x;
	cin >> x;
	bitset<8> b(x);
	cout << b << endl;

	int y = (1 << 2);
	bitset<8> b2(y);
	cout << b2 << endl;


	int z = x & y;
	bitset<8> b3(z);
	cout << b3 << endl;

	if(z == 0){
		cout << "0" << endl;
	}else{
		cout << "1" << endl;
	}


	return 0;
}
