#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

struct circle{
	double x;
	double y;
	double r;

	circle(){
		
	}

	circle(int _x, int _y, int _r){
		this->x = _x;
		this->y = _y;
		this->r = _r;
	}

	circle operator +(circle c){
		circle a(this->x + c.x,this->y + c.y,this->r + c.r);
		return a;
	}
	
	string toString(){
		stringstream ss;
		ss << x << " " << y << " "<< r;
		return ss.str();
	}
};