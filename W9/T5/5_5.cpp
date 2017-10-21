#include <iostream>
#include <sstream>

using namespace std;

int main(){

	string item1 = "apple";
	string item2 = "pie";

	int n1 = item1.size();
	char c1[n1];
	item1.copy(c1,n1,0);
	c1[n1] = '\0';

	int n2 = item2.size();
	char c2[n2];
	item2.copy(c2,n2,0);
	c2[n2] = '\0';

	double price1 = 34.1;	
	double price2 = 24.2;

	printf("%s %.1f\n%s %.1f\n==========\ntotal %.1f\n",c1,price1,c2,price2,price1 + price2 );	

	return 0;
}
/*
item1 34.1
item2 24.2
==========
total 58.3
*/

