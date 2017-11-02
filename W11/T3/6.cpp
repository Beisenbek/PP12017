#include <iostream>

using namespace std;

void swap2(int &x, int &y){

  int c = x;
  x = y;
  y = c;

}

int main(){

	int x,y;
	cin >> x >> y;

	swap2(x,y);

	cout << x << " " << y << endl;

	return 0;
}
