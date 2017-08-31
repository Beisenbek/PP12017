#include <iostream>
#include <cmath>

using namespace std;


int main(){

	freopen("input.txt","r",stdin);

	int a,b,c;
	cin >> a >> b >> c;

	int a2 = a * a;
	int b2 = b * b;
	int c2 = c * c;

	double ma = sqrt(2*(b2 + c2) - a2)*0.5;	
	double mb = sqrt(2*(a2 + c2) - b2)*0.5;	
	double mc = sqrt(2*(b2 + a2) - c2)*0.5;	

	printf("%.2f %.2f %.2f\n",ma,mb,mc);

	return 0;
}