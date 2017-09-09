#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x;

	cin >> x;

	bool A = (x % 2 == 0);

	if(!A){
		cout << "NO";
	}else{
		cout << "YES";
	}

	return 0;
}
