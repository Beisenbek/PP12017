#include <iostream>
#include <cmath>

using namespace std;

double dl3(double x, double y){
	return pow(x,2)+ pow(y,2);
}

int main(){

	int n;
	cin >> n;
	double bestX = 0, bestY = 0;
	double x,y;

	for(int i = 0; i < n; ++i){
		cin >> x >> y;
		if(dl3(bestX,bestY) < dl3(x,y)){
			bestX = x;
			bestY = y;
		}
	}

	cout << bestX << " " << bestY << endl;
	
	return 0;
}