#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double l;

	cin >> l;

	double r = l/2/M_PI;
	double s = M_PI * r * r;

	printf("%.2f %.4f\n",r,s);

	return 0;
}