#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;
	if ((n > 3 && n % 2 == 0) || (n > 3 && n % 3 == 0) || (n > 3 && n % 5 == 0 && n != 5))
		cout << "NO";
	else 
		cout << "YES";
	




	return 0;
}
