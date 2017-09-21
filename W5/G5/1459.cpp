#include <iostream>


using namespace std;

int main(){
	
	int x;
	cin >> x;

	int a = x / 100;
	int b = (x % 100)/10;
	int c = x % 10;
	
	if(a == 1) cout << "C";

	if(b == 1)	cout << "X";
	if(b == 2)	cout << "XX";
	if(b == 3)	cout << "XXX";
	if(b == 4)	cout << "XL";
	if(b == 5)	cout << "L";
	if(b == 6)	cout << "LX";
	if(b == 7)	cout << "LXX";
	if(b == 8)	cout << "LXXX";
	if(b == 9)	cout << "XC";

	if(c == 1)	cout << "I";
	if(c == 2)	cout << "II";
	if(c == 3)	cout << "III";
	if(c == 4)	cout << "IV";
	if(c == 5)	cout << "V";
	if(c == 6)	cout << "VI";
	if(c == 7)	cout << "VII";
	if(c == 8)	cout << "VIII";
	if(c == 9)	cout << "IX";

	return 0;
}