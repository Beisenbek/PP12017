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

double dl(point p1, point p2){
	return sqrt(pow(p1.x - p2.x,2)+ pow(p1.y - p2.y,2));
}


int main(){

	int n;
	cin >> n;
	point a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i].x >> a[i].y;
	}

	int index = 0;
	point p;
	p.x = 0;
	p.y = 0;

	for(int i = 1; i < n; ++i){
		if(dl(a[index],p) < dl(a[i],p)){
			index = i;
		}
	}

	cout << a[index].x << " " << a[index].y << endl;
	
	return 0;
}