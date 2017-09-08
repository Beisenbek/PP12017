#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

	int A,i;
	    
	cin >> A >> i;

	cout << ((A >> i) << i) << endl;

	return 0;
}
