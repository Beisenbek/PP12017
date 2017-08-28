#include <iostream>
#include <cmath>


using namespace std;

int main(){

	double f;
	cin >> f;

	int i = floor(f);//downward
	int j = ceil(f);//upward
	int k = round(f);

	cout << f << endl;
	cout << i << endl;
	cout << j << endl;
	cout << k << endl;

	return 0;
}
