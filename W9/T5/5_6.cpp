#include <iostream>
#include <sstream>

using namespace std;

int main(){

	string item1 = "apple";
	string item2 = "pie";

	int n1 = item1.size();

	double price1 = 34.127834;	
	double price2 = 24.2;

	cout << item1 << " " << price1 << endl;
	cout << item2 << " " << price2 << endl;
	cout << "==========" << endl;
	cout << "total " << price2 + price1<< endl;

	return 0;
}
/*
item1 34.1
item2 24.2
==========
total 58.3
*/

