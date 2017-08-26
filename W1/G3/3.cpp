#include <iostream>
#include <math.h>

using namespace std;


int main(){

	int a;

	cin >> a;

	//square root for a
	double y = sqrt(a);	

	/*
	cout << y << endl;
	printf("%.2f\n",y);
	*/
	
	printf("%.2f %.3f\n",y,y);

  	return 0;	
}