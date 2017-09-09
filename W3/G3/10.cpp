#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x;
	cin >> x;

	bool A = (x % 4 == 0);
	bool B = (x % 100 != 0);
	bool C = (x % 400 == 0);


	if(A && B) cout << "YES";
	else if(C) cout << "YES";
	else cout << "NO";


	return 0;
}
