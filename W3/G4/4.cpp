#include <iostream>
#include <cmath>

using namespace std;


/*
	==
	!=
	>=
	<=
	<
	>
	!
	*/

int main(){

	int n;
	cin >> n;

	bool A = (n % 2 != 1);

	if(!A){
		cout << "ODD!";
	}else{
		cout << "EVEN!";
	}	

	return 0;
}
