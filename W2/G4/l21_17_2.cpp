#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x,y,z;
	cin >> x >> y >> z;


	double a11 = sqrt(fabs(1.0*x-1));
	double a12 = pow(fabs(1.0*y),1/3);
	double a1 = a11 - a12;
	double a2 = 1 + (x/2.0)*x + pow(y/2.0,2);
	double a = a1 / a2;

	double b = x * (atan(z) + exp(-x-3));

	printf("%.6f %.6f\n",a,b);


	return 0;
}