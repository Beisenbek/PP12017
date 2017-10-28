#include <iostream>
#include <map>

using namespace std;

//apb - a plus b
int apb(int a,int b);
//amb - a minus b
int amb(int a,int b);

int apb(int a,int b){
	cout << amb(a,b) << endl;
	return a + b;
}

int amb(int a,int b){
	return a - b;
}

int main(){

	int a = 2;
	int b = 4;
	int x = 1;
	int y = 3;
	cout << amb(a,b) << endl;
	cout << amb(b,a) << endl;
	cout << amb(x,y) << endl;

	return 0;
}