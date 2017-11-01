#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
};

double dl2(point p1){
	return sqrt(pow(p1.x,2)+ pow(p1.y,2));
}

int main(){

	int n;
	cin >> n;
	point a[n];
	int index = 0;
	double res = 0;

	for(int i = 0; i < n; ++i){
		cin >> a[i].x >> a[i].y;
		double t = dl2(a[i]);
		if(t > res){
			index = i;
			res = t;
		}
	}

	cout << a[index].x << " " << a[index].y << endl;
	
	return 0;
}