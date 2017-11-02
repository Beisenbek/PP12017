#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;

	bool operator < (point a){
		point p0;
		p0.x = 0;
		p0.y = 0;

		double l1 = f(this,&p0);
		double l2 = f(&a,&p0);

		if(l1 < l2) return true;
		return false;
	}

	bool operator > (point a){
		point p0;
		p0.x = 0;
		p0.y = 0;

		double l1 = f(this,&p0);
		double l2 = f(&a,&p0);

		if(l1 > l2) return true;
		return false;
	}

	double f(point * a, point * b){
		return sqrt((a->x-b->x)*(a->x-b->x) + (a->y-b->y)*(a->y-b->y));
	}

	
};


int main(){

	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	for(int i = 0; i < n-1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(p[i] > p[j]){
				swap(p[i],p[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << p[i].x << " " << p[i].y << endl;
	}


	return 0;
}

