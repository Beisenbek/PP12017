#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	int n;

	cin >> n;

	bool A = (n % 4 == 0);
	bool B = (n % 100 == 0);
	bool C = (n % 400 == 0);

	if((A & !B)|| C){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	return 0;
}
