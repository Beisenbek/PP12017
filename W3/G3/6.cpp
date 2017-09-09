#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x;

	cin >> x;

	bool A = (x % 2 == 0);

	if(A){
		cout << "YES";
	}else{
		cout << "NO";
	}

	return 0;
}
