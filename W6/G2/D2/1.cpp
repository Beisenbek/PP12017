#include <iostream>
#include <cmath>

using namespace std;

int main(){

	string item1 = "pen";
	string item2 = "pencil";

	double price1 = 3.5;
	double price2 = 2.5;

	printf("%s\t%.2f\n%s\t%.2f\n\t\tTOTAL:%.2f",item1.c_str(),price1,item2.c_str(),price2,price1 + price2);

	return 0;
}
