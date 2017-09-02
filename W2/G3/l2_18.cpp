#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double x,y,z;

	cin >> x >> y >> z;

	double a22 = 1/(x*x+4);
	double a21 = exp(-x-2);
	double a2 = a21 + a22;
	double a12 = y/(x*x+4);
	double a1 = x + a12;
	double a = ((1 + y) / a2) * a1;

	double b1 = 1 + cos(y-2);
	double b2 = pow(x,4)/2 + pow(sin(z),2);
	double b = b1/b2;

	printf("%.6f %.6f\n", a,b);

	return 0;
}