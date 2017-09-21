#include <iostream>


using namespace std;

int main(){

	int x;

	cin >> x;

	do{
		cout << x % 10 << endl;
		x = x / 10;
	}while(x > 0);

	return 0;
}
