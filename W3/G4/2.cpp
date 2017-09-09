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
	*/

int main(){

	int n;
	cin >> n;

	bool A = (n % 2 != 1);

	if(A == true){
		cout << "EVEN!";
	}else{
		cout << "ODD";
	}


	return 0;
}
