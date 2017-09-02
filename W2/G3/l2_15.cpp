#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,b,c;
	cin >> a >> b >> c;

	double la12 = (b+c)*(b+c) - a * a;
	double la1 = sqrt(b*c*la12);
	double la = la1/(b + c);

	cout << la << endl;

	return 0;
}