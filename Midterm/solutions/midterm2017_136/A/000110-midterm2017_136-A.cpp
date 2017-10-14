#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	int x;
	cin >> x;

	if (x == 1) cout << "NO";
	else if (x%2 == 0 || x%3 == 0 || x%5 == 0 || x%7 == 0) cout << "NO";
    else cout << "NO";


	return 0;
}