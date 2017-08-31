#include <iostream>

using namespace std;


int main(){

	double r;
	cin >> r;
	double pi = 3.14;
	double s = pi * r * r;
	double l = 2 * pi * r;

	//cout <<  l << " " << s << endl;
	printf("%.6f %.6f\n",l,s);

	return 0;
}