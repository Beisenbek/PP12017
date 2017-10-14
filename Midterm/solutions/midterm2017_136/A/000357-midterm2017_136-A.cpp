#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	int x;
	cin >> x;

	if (x == 1 || (x != 2 && x%2 == 0) || (x != 3 && x%3 == 0) || (x != 5 && x%5 == 0) || (x != 7 && x%7 == 0)) cout << "NO";
	else cout << "YES";


	return 0;
}