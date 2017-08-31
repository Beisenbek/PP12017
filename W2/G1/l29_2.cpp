#include <iostream>
#include <cmath>

using namespace std;


int main(){

	double r;
	cin >> r;
	double s = M_PI * r * r;
	double l = 2 * M_PI * r;

	printf("%.6f %.6f\n",l,s);
	
	return 0;
}