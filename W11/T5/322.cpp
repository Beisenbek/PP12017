#include <iostream>
#include <cmath>

using namespace std;

struct mpoint{
	double x;
	double y;
	double l(){
		return sqrt(x*x + y*y);
	}
};

int main(){

	freopen("input2.txt","r",stdin);
	int n;
	cin >> n;
	mpoint p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	int index = 0;

	for(int i = 1; i < n; ++i){
		if(p[index].l() < p[i].l()){
			index = i;
		}
	}

	cout << p[index].x << " " << p[index].y << endl;

	return 0;
}
