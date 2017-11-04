#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

struct circle{
	double x;
	double y;
	double r;
	circle operator +(circle c){
		circle a;
		a.x = this->x + c.x;
		a.y = this->y + c.y;
		a.r = this->r + c.r;
		return a;
	}
	void readParams(){
		cin >> x >> y >> r;
	}
	string toString(){
		stringstream ss;
		ss << x << " " << y << " "<< r;
		return ss.str();
	}
};


int main(){

	circle a,b;
	a.readParams();
	b.readParams();

	circle c = a + b;

	cout << c.toString() << endl;


	return 0;
}