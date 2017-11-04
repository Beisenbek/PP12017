#include <cmath>

struct circle{
	double x;
	double y;
	double r;

	bool operator > (circle b){
		double s1 = M_PI * r * r;
		double s2 = M_PI * b.r * b.r;
		return s1 > s2;
	}

	double operator + (circle b){
		double s1 = M_PI * r * r;
		double s2 = M_PI * b.r * b.r;
		return s1 + s2;
	}
};
