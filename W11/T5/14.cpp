#include <iostream>
#include <cmath>

using namespace std;

struct circle{
	double x;
	double y;
	double r;

	bool operator > (circle b){
		double s1 = M_PI * r * r;
		double s2 = M_PI * b.r * b.r;
		return s1 > s2;
	}
};


int main(){

	circle a,b;
	cin >> a.x >> a.y >> a.r;
	cin >> b.x >> b.y >> b.r;

	if(a > b){
		cout << "a is bigger than b" << endl;
	}else{
		cout << "b is bigger than a" << endl;
	}
 
	return 0;
}
