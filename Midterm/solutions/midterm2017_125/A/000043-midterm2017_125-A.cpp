#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, b, c;
cin >> a;
for ( int i = 2; i < a; i++){
	if ( a % i == 0)
		cout << "NO";
	break;
}
cout << "YES";

	return 0;
}