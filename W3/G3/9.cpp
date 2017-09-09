#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x;

	cin >> x;

	bool A = (x % 2 != 0);

	if(!A){
		cout << "EVEN";
	}else{
		cout << "ODD";
	}

	return 0;
}
