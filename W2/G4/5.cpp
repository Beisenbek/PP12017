#include <iostream>


using namespace std;

int main(){

	char c;

	cin >> c;

	cout << int(c) - int('0') << endl;	
	cout << (int)c - (int)'0' << endl;	
	cout << c - int('0') << endl;	
	//converting to decimal from char
	cout << c - 48 << endl;	
	cout << c - '0' << endl;	
	return 0;
}