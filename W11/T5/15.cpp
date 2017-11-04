#include <iostream>
#include "circle.h"

using namespace std;

int main(){

	circle a,b;
	cin >> a.x >> a.y >> a.r;
	cin >> b.x >> b.y >> b.r;

	cout << a + b << endl;
 
	return 0;
}
