#include <iostream>
#include <cmath>
#include <sstream>
#include "circle.h"

using namespace std;

int main(){


	circle d;
	
	circle a(1,1,2);
	circle b(2,2,3);

	circle c = a + b;

	cout << c.toString() << endl;

	return 0;
}