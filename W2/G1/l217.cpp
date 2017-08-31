#include <iostream>
#include <cmath>

using namespace std;


int main(){

	freopen("input.txt","r",stdin);

	double x,y,z;

	cin >> x >> y >> z;
	double a12 = pow(abs(y),1.0/3);
	double a11 = sqrt(abs(x-1));
	double a1 = a11 - a12;
	double a21 = x * (x / 2);
	double a22 = y * (y / 4);
	double a2 = 1 + a21 + a22;
	double a = a1/a2;

	double b12 = exp(-x-3);
	double b1 = atan(z) + b12;
	double b = x * b1;

	printf("%.6f %.6f\n",a,b);

	return 0;
}