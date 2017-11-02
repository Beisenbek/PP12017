#include <iostream>

using namespace std;

void readNums(int &x, int &y){
	cin >>x >> y;
}

void swap2(int &x, int &y){
  x = x + y;//5
  y = x - y;//2
  x = x - y;//3
}

void printNums(int &x, int &y){
	cout << x << " " << y << endl;
}

int main(){

	int x,y;

	readNums();
	swap2();
	printNums();

	return 0;
}
