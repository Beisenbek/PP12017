#include <iostream>
#include <sstream>

using namespace std;

int main(){

	string item1 = "apple";
	string item2 = "pie";

	int n1 = item1.size();

	double price1 = 34.1278;	
	double price2 = 24.2;

	printf("%s %.2f\n%s %.2f\n==========\ntotal %.2f\n",item1.c_str(),price1,item2.c_str(),price2,price1 + price2 );	

	return 0;
}
/*
item1 34.1
item2 24.2
==========
total 58.3
*/

