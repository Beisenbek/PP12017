#include <iostream>

using namespace std;

struct circle{
	double x;
	double y;
	double r;

	circle operator + (circle b){
		circle c;
		c.x = x + b.x;
		c.y = y + b.y;
		c.r = r + b.r;
		return c;
	}
};


int main(){

	circle a,b;
	cin >> a.x >> a.y >> a.r;
	cin >> b.x >> b.y >> b.r;

	circle c = a + b;

	cout << c.x << " " << c.y << " " << c.r << endl;
 
	return 0;
}
