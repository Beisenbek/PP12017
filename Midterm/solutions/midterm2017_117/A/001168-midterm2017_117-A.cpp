#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;
	if ((n % 2 == 0 || n % 3 == 0 || n % 5 == 0) && (n != 5 && n != 2 && n != 3) || (n == 1 || n == 0) || n < 0)
		cout << "NO";
	else 
		cout << "YES";
	




	return 0;
}
