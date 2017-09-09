#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x;

	cin >> x;

	bool A = (x % 2 != 0);

	if(A){
		cout << "ODD";
	}else{
		cout << "EVEN";
	}

	return 0;
}
