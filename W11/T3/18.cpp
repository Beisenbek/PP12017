#include <iostream>
#include <cmath>

using namespace std;

struct circle{
	double x;
	double y;
	double r;

	circle operator + (circle c2){
		circle res;

		res.x = this->x + c2.x;
		res.y = this->y + c2.y;
		res.r = this->r + c2.r;

		return res;
	}

	void print(){
		cout << this->x << " " << this->y << " " << this->r << endl;
	}
};

int main(){

	circle c1;
	circle c2;

	cin >> c1.x >> c1.y >> c1.r;
	cin >> c2.x >> c2.y >> c2.r;

	c1.print();
	c2.print();

	circle c3 = c1 + c2;

	c3.print();

	return 0;
}

