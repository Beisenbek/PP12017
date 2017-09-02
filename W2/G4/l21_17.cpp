#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double x,y,z;
	cin >> x >> y >> z;


	double a11 = sqrt(fabs(x-1));
	double a12 = pow(fabs(y),1/3);
	double a1 = a11 - a12;
	double a2 = 1 + (x/2)*x + pow(y/2,2);
	double a = a1 / a2;


	printf("%.6f\n",a);


	return 0;
}