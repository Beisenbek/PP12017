#include <iostream>

using namespace std;

void swap2(int x, int y){

  cout << x << " " << y << endl;

  int c = x;
  x = y;
  y = c;

  cout << a << " " << b << endl;
  
}

int main(){

	int x,y;
	cin >> x >> y;

	swap2(x,y);

	cout << x << " " << y << endl;

	return 0;
}
